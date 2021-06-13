/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 16:15:29 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/30 14:40:46 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	tooHigh1(void)
{
	Bureaucrat a("Sam", 0);
}

void	tooHigh2(void)
{
	Bureaucrat a("Sam", 1);
	a.incGrade();
}

void	tooLow1(void)
{
	Bureaucrat a("Sam", 151);
}

void	tooLow2(void)
{
	Bureaucrat a("Sam", 150);
	a.decGrade();
}

int		main()
{
	try
	{
		tooHigh1();
		// tooHigh2();
		// tooLow1();
		// tooLow2();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
