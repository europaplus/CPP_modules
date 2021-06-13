/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 18:28:15 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/31 18:01:01 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExecute)
:
	_name(name),
	_signed(0),
	_gradeToSign(gradeToSign),
	_gradeToExecute(gradeToExecute)
{
	if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw Form::GradeTooLowException("Grade too low");
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw Form::GradeTooHighException("Grade too high");
	std::cout << _name + " creating..." << std::endl;
}

Form::~Form() {}

Form &Form::operator=(Form const &assign)
{
	if (this == &assign)
		return (*this);
	_signed = assign._signed;
	return (*this);
}

const	std::string &Form::getName() const { return (_name); }
int		Form::getSigned() const { return (_signed); }
int		Form::getGradeToSign() const { return (_gradeToSign); }
int		Form::getGradeToExecute() const { return (_gradeToExecute); }

void	Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (_signed)
		std::cout << bureaucrat.getName() + " cannot sign " + _name + ", because already sign." << std::endl;
	else if (bureaucrat.getGrade() <= _gradeToSign)
	{
		std::cout << bureaucrat.getName() + " signs " + _name << std::endl;
		_signed = true;
	}
	else
		throw Form::GradeTooLowException("Grade too low for signing.");
}

Form::Form(Form const &copy)
:
	_name(copy._name),
	_signed(copy._signed),
	_gradeToSign(copy._gradeToSign),
	_gradeToExecute(copy._gradeToExecute)
{}

const char *Form::GradeTooHighException::what() const throw()
{ return (GradeTooHighException::_msg); }

const char *Form::GradeTooLowException::what() const throw()
{ return (GradeTooLowException::_msg); }

Form::GradeTooHighException::~GradeTooHighException () throw() {};
Form::GradeTooLowException::~GradeTooLowException () throw() {};

std::ostream	&operator<<(std::ostream &out, const Form &sp)
{
	std::cout << sp.getName() + " have : signed(" << sp.getSigned() << "), gradeToSign("
	<< sp.getGradeToSign() << "), gradeToExecute(" << sp.getGradeToExecute() << ")."
	<< std::endl;
	return (out);
}
