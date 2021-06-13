/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:14:34 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/29 16:48:34 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
:
	Form("Robotomy form", 72, 45),
	_target(target)
{ srand(std::time(nullptr)); }

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
:
	Form("Robotomy form", 25, 5)
{
	*this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &assign)
{
	if (this == &assign)
		return (*this);
	_target = assign._target;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	if (rand() % 2)
		std::cout << _target + " has been robotomized successfully" << std::endl;
	else
		std::cout << _target + " has been robotomized failure." << std::endl;
}
