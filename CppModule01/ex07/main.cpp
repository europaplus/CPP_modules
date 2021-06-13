/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 15:07:47 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/18 18:47:35 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void	replaceStr(std::string &s1, std::string &s2,
	std::ifstream &fin, std::ofstream &fout)
{
	while(!fin.eof())
	{
		std::string str;
		std::getline(fin, str);
		std::size_t found = str.find(s1);
		while (found != std::string::npos)
		{
			str.replace(found, s1.length(), s2);
			found = str.find(s1);
		}
		fout << str;
		if (!fin.eof())
			fout << std::endl;
	}
}

void	openfile(std::string path, std::string s1, std::string s2)
{
	std::ifstream fin;
	std::ofstream fout;

	fin.open(path);
	if (!(fin.is_open()))
		std::cerr << "Error opening" << std::endl;
	else
	{
		fout.open(path + ".replace", std::ofstream::trunc);
		if (!(fout.is_open()))
			std::cerr << "Error opening" << std::endl;
		else
			replaceStr(s1, s2, fin, fout);
	}
	fout.close();
	fin.close();
}

int		checkArguments(char **argv)
{
	if (argv[2][0] == '\0')
	{
		std::cout << "s1 is empty" << std::endl;
		return (1);
	}
	else if (argv[3][0] == '\0')
	{
		std::cout << "s2 is empty" << std::endl;
		return (1);
	} if (argv[1][0] == '\0')
	{
		std::cout << "s2 is empty" << std::endl;
		return (1);		
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (checkArguments(argv) == 1)
			return (1);
		openfile(argv[1], argv[2], argv[3]);
	}
	else
	{
		std::cout << "Wrong count of argumetns" << std::endl;
		return (1);
	}
	return (0);
}