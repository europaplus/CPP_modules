/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:54:50 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/31 18:31:31 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTREN_H
# define INTREN_H

# include <iostream>
# include <string>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(Intern const &copy);
		Intern &operator=(Intern const &assign);
		Form *makeForm(std::string const &name, std::string const &target);
		class FormUnknown: public std::exception
		{
			private:
				const char *_msg;
			public:
				FormUnknown(const char *msg) : _msg(msg) {}
				~FormUnknown() throw();
				const char *what() const throw();
		};
};

#endif