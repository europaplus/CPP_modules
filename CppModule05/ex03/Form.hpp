/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 18:04:53 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/31 12:01:34 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include <iostream>
# include <string>
class Form;
# include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string _name;
		bool			_signed;
		const int		_gradeToSign;
		const int		_gradeToExecute;
	public:
		Form(std::string name, int gradeToSign, int gradeToExecute);
		virtual ~Form();
		Form(Form const &copy);
		Form &operator=(Form const &assign);
		const std::string &getName() const;
		int		getSigned() const;
		int 	getGradeToSign() const;
		int		getGradeToExecute() const;
		void	beSigned(Bureaucrat const &bureaucrat);
		virtual void execute(Bureaucrat const &executor) const = 0;
		class GradeTooHighException : public std::exception
		{
			private:
				const char *_msg;
			public:
				GradeTooHighException(const char *msg) : _msg(msg) {}
				~GradeTooHighException() throw();
				const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			private:
				const char *_msg;
			public:
				GradeTooLowException(const char *msg) : _msg(msg) {}
				~GradeTooLowException() throw();
				const char *what() const throw();
		};
		class IfNotSigned: public std::exception
		{
			private:
				const char *_msg;
			public:
				IfNotSigned(const char *msg) : _msg(msg) {}
				~IfNotSigned() throw();
				const char *what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &out, const Form &sp);

#endif
