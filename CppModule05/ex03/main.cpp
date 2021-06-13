/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 16:15:29 by knfonda           #+#    #+#             */
/*   Updated: 2021/04/01 18:08:21 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int		main()
{
	try
	{
		Intern  someRandomIntern;
		Form*   rrf;
		// rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		// rrf = someRandomIntern.makeForm("robotomy requests", "Bender");
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		Bureaucrat a("Sam", 1);
		std::cout << *rrf;
		a.signForm(*rrf);
		std::cout << *rrf;
		rrf->execute(a);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;;
	}

	return (0);
}