/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:14:34 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/31 18:22:39 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
:
	Form("Presidential form", 25, 5),
	_target(target)
{}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
:
	Form("Presidential form", 25, 5)
{ *this = copy; }

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &assign)
{
	if (this == &assign)
		return (*this);
	_target = assign._target;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << _target + " has been pardoned by Zafod Beeblebrox." << std::endl;
}
