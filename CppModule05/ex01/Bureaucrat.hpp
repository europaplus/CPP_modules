/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 15:14:52 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/30 14:36:57 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <string>
# include <exception>
class Bureaucrat;
# include "Form.hpp"

class Bureaucrat
{
	private:
		std::string const _name;
		int			_grade;
	public:
		Bureaucrat(std::string name, int _grade);
		virtual ~Bureaucrat();
		Bureaucrat(Bureaucrat const &copy);
		Bureaucrat &operator=(Bureaucrat const &assign);
		const std::string &getName() const;
		int		getGrade() const;
		void	incGrade();
		void	decGrade();
		void	signForm(Form &form);
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
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &sp);

#endif
