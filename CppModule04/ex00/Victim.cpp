/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 02:43:42 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/24 13:38:33 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim() {
	
}

Victim::Victim(const std::string &name)
	:
	_name(name)
{
	std::cout << "Some random victim called " + _name + " just appeared!"<< std::endl;
}

Victim::~Victim(){
	std::cout << "Victim " + _name + " just died for no apparent reason!" << std::endl;
}

Victim::Victim(const Victim &copy){
	std::cout << "Some random victim called " + _name + " just appeared!"<< std::endl;
	*this = copy;
}

Victim	&Victim::operator=(const Victim &assign)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &assign)
		return (*this);
	_name = assign._name;
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Victim &sp)
{
	out << "I'm " + sp.getName() + " and I like otters!" << std::endl;
	return (out);
}

void	Victim::getPolymorphed() const
{
	std::cout << _name + " has been turned into a cute little sheep!" << std::endl;
}

std::string	Victim::getName() const { return (_name); }
