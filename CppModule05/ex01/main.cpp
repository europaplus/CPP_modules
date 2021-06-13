/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 16:15:29 by knfonda           #+#    #+#             */
/*   Updated: 2021/04/01 18:01:28 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void	mainTooHigh1(void)
{
	Bureaucrat a("Sam", 0);
}

void	mainTooHigh2(void)
{
	Bureaucrat a("Sam", 1);
	a.incGrade();
}

void	mainTooLow1(void)
{
	Bureaucrat a("Sam", 151);
}

void	mainTooLow2(void)
{
	Bureaucrat a("Sam", 150);
	a.decGrade();
}

void	main_test(void)
{
	try
	{
		// mainTooHigh1();
		// mainTooHigh2();
		// mainTooLow1();
		// mainTooLow2();
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	FormTooHigh1(void)
{
	// Form("Form", 0, 1);
	// Form("Form", 1, 0);
}

void	FormTooLow1(void)
{
	// Form("Form", 151, 1);
	// Form("Form", 1, 151);
}

void	normalTest(void)
{
	Bureaucrat b("Sam", 1);
	Form a("randomForm", 1, 1);
	a.beSigned(b);	
}

void	notNormalTest1(void)
{
	Bureaucrat b("Sam", 2);
	Form a("randomForm", 1, 1);
	a.beSigned(b);
}

void	notNormalTest2(void)
{
	Bureaucrat b("Sam", 1);
	Form a("randomForm", 1, 1);
	std::cout << a;
	a.beSigned(b);
	std::cout << a;
	a.beSigned(b);
}

int		main()
{
	// main_test();
	try
	{
		// FormTooHigh1();
		// FormTooLow1();
		// normalTest();
		// notNormalTest1();
		notNormalTest2();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;;
	}

	return (0);
}