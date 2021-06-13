/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:14:34 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/29 16:48:34 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

void ShrubberyCreationForm::createAsciiTree(std::ofstream &fout) const
{
	int sizeOfTree = 7;

	for (int i = 1; i < sizeOfTree; i++)
	{
		for (int j = 0; j < sizeOfTree - i; j++)
			fout << " ";
		for (int j = 0; j < i * 2; j++)
			fout << "*";
		fout << std::endl;
	}
	for (int i = 0; i < sizeOfTree - 5; i++)
	{
		for (int j = 0; j < sizeOfTree - 2; j++)
			fout << " ";
		for (int j = 0; j < 4; j++)
			fout << "|";
		fout << std::endl;
	}
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
:
	Form("Shrubbery form", 145, 137),
	_target(target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
:
	Form("Shrubbery form", 25, 5)
{ *this = copy; }

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &assign)
{
	if (this == &assign)
		return (*this);
	_target = assign._target;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::ofstream fout;
	fout.exceptions(std::ofstream::badbit | std::ofstream::failbit);
	try
	{
		fout.open(_target + "_shrubbery");
	}
	catch (const std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
		std::cout << "Error open file." << std::endl;
		return ;
	}
	createAsciiTree(fout);
}
