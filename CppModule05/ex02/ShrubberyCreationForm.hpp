/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:11:03 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/29 16:47:33 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include "Form.hpp"
class ShrubberyCreationForm;

class ShrubberyCreationForm : public Form
{
	private:
		std::string _target;
		void createAsciiTree(std::ofstream &fout) const;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const &target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &assign);
		void execute(Bureaucrat const &executor) const;
};

std::ostream	&operator<<(std::ostream &out, const ShrubberyCreationForm &sp);

#endif
