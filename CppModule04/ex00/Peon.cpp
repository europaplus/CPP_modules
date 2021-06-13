/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 03:05:38 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/24 13:37:50 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(const std::string &name)
	:
	Victim(name)
{
	std::cout << "Zog zog."<< std::endl;
}

Peon::~Peon(){
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(const Peon &copy){
	std::cout << "Zog zog."<< std::endl;
	*this = copy;
}

Peon	&Peon::operator=(const Peon &assign)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &assign)
		return (*this);
	_name = assign._name;
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Peon &sp)
{
	out << "I'm " + sp.getName() + " and I like otters!" << std::endl;
	return (out);
}

void	Peon::getPolymorphed() const
{
	std::cout << _name + " has been turned into a pink pony!" << std::endl;
}

std::string	Peon::getName() const { return (_name); }
