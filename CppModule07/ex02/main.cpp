/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 18:56:27 by knfonda           #+#    #+#             */
/*   Updated: 2021/04/03 13:10:45 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

void	main_test(void)
{
	Array<int> b(5);

	try
	{
		for (int i = 0; i < b.getSize(); i++)
			b[i] = i;
		for (int i = 0; i < b.getSize(); i++)
			std::cout << b[i] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	test2()
{
	Array<double> b(5);

	std::cout << std::fixed << std::setprecision(1);
	try
	{
		for (int i = 0; i < b.getSize(); i++)
			b[i] = static_cast<double>(i) / 2;
		for (int i = 0; i < b.getSize(); i++)
			std::cout << b[i] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}	
}

void	test3()
{
	Array<int> b(5);
	
	try
	{
		for (int i = 0; i < b.getSize(); i++)
			b[i] = i;
		for (int i = 0; i < b.getSize(); i++)
			std::cout << b[i + 1] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}	
}

void	test4()
{
	Array<std::string> b(5);
	std::string		str = "abcdABCD";
	srand(time(0));

	try
	{
		for (int i = 0; i < b.getSize(); i++)
		{
			for (unsigned long j = 0; j < str.length(); j++)
				b[i] += str[rand() % 7];
		}
		for (int i = 0; i < b.getSize(); i++)
			std::cout << b[i] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}	
}

int		main()
{
	main_test();
	// test2();
	// test3();
	// test4();
	return (0);
}
