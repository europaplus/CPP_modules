/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:56:53 by knfonda           #+#    #+#             */
/*   Updated: 2021/04/01 18:06:19 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(Intern const &copy) { *this = copy; }

Intern &Intern::operator=(Intern const &assign)
{
	if (this == &assign)
		return (*this);
	return (*this);
}

static Form *getPresidentialPardonForm(std::string const &target) { return (new PresidentialPardonForm(target)); }
static Form *getRobotomyRequestForm(std::string const &target) { return (new RobotomyRequestForm(target)); }
static Form *getShrubberyCreationForm(std::string const &target) { return (new ShrubberyCreationForm(target)); }

Form *Intern::makeForm(std::string const &name, std::string const &target)
{
	typedef Form* (*func)(std::string const &target);
	typedef struct	s_typeOfForm
	{
		std::string const	type;
		func				getFunc;
	}				t_typeOfForm;
	t_typeOfForm getForm[] =
		{
			{"presidential pardon", &getPresidentialPardonForm},
			{"robotomy request", &getRobotomyRequestForm},
			{"shrubbery creation", &getShrubberyCreationForm}
		};
	for (int i = 0; i < 3; i++)
		if (name == getForm[i].type)
		{
			// std::cout << "Created " + getForm[i].type << std::endl;
			return (getForm[i].getFunc(target));
		}
	std::cout << "Form \"" + name + "\"";
	throw FormUnknown(" unknown.");
}

const char *Intern::FormUnknown::what() const throw()
{ return (FormUnknown::_msg); }

Intern::FormUnknown::~FormUnknown () throw() {};