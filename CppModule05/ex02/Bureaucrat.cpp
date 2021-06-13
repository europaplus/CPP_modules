/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 15:19:31 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/31 17:56:44 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade)
:
	_name(name),
	_grade(grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException("Grade too low");
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException("Grade too high");
	std::cout << _name + " bureaucrat creating..." << std::endl;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &assign)
{
	if (this != &assign)
		_grade = assign._grade;
	return (*this);
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) : _name(copy._name) { *this = copy; }

const std::string &Bureaucrat::getName() const { return (_name); }

int	Bureaucrat::getGrade() const { return (_grade); }

void Bureaucrat::incGrade()
{
	--_grade;
	if ((_grade) < 1)
		throw Bureaucrat::GradeTooHighException("Grade too high");
}

void Bureaucrat::decGrade()
{
	++_grade;
	if ((_grade) > 150)
		throw Bureaucrat::GradeTooLowException("Grade too low");
}

void	Bureaucrat::signForm(Form &form)
{
	form.beSigned(*this);
}

void	Bureaucrat::executeForm(Form const &form)
{
	form.execute(*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{ return (GradeTooHighException::_msg); }

const char *Bureaucrat::GradeTooLowException::what() const throw()
{ return (GradeTooLowException::_msg); }

Bureaucrat::GradeTooHighException::~GradeTooHighException () throw() {};
Bureaucrat::GradeTooLowException::~GradeTooLowException () throw() {};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &sp)
{
	std::cout << sp.getName() + ", bureaucrat grade " << sp.getGrade() << std::endl;
	return (out);
}
