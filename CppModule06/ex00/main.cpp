/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 16:55:34 by knfonda           #+#    #+#             */
/*   Updated: 2021/04/05 12:31:36 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <sstream>
#include <stdlib.h>
#include <iomanip>

void	convertChar(Convert &test)
{
	try
	{
		char i = static_cast<char>(test);
		std::cout << "char: '" << i << "'" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "char: ";
		std::cerr << e.what() << std::endl;
	}	
}

void	convertInt(Convert &test)
{
	try
	{
		std::cout << "int: " << static_cast<int>(test) << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}	
}

void	convertFloat(Convert &test)
{
	try
	{
		std::cout << "float: " << static_cast<float>(test) << "f" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}	
}

void	convertDouble(Convert &test)
{
	try
	{
		std::cout << "double: " << static_cast<double>(test) << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}	
}

int		main(int argc, char *argv[])
{
	std::cout << std::fixed << std::setprecision(1);
	try
	{
		if (argc != 2)
			throw Convert::Impossible("Error count arguments");
		std::string str = argv[1];
		if (str.empty())
			throw Convert::Impossible("String is empty");
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	Convert test(argv[1]);
	convertChar(test);
	convertInt(test);
	convertFloat(test);
	convertDouble(test);
}
