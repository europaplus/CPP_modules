/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 01:03:01 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/24 13:28:11 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SORCERER_H
# define SORCERER_H

# include <iostream>
# include <string>
# include "Victim.hpp"
# include "Peon.hpp"
# include "Cat.hpp"

class Sorcerer {
	protected:
	private:
		std::string _name;
		std::string _title;
		Sorcerer();
	public:
		Sorcerer(const std::string &name, const std::string &title);
		~Sorcerer();
		Sorcerer(const Sorcerer &copy);
		Sorcerer &operator=(const Sorcerer &assign);
		std::string	getName() const;
		std::string getTitle() const;
		void	polymorph(Victim const &target) const;
};

std::ostream	&operator<<(std::ostream &out, const Sorcerer &sp);

#endif
