/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 16:15:29 by knfonda           #+#    #+#             */
/*   Updated: 2021/04/01 18:02:14 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int		main()
{
	try
	{
		Bureaucrat a("Sam", 1);
		Form *form = new ShrubberyCreationForm("FormHome");
		// Form *form = new PresidentialPardonForm("FormHome");
		// Form *form = new RobotomyRequestForm("FormHome");
		std::cout << *form;
		a.signForm(*form);
		std::cout << *form;
		form->execute(a);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;;
	}

	return (0);
}