/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 03:09:55 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/24 13:43:26 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(const std::string &name)
	:
	Victim(name)
{
	std::cout << "Meow meow!"<< std::endl;
}

Cat::~Cat(){
	std::cout << "Minus one life.." << std::endl;
}

Cat::Cat(const Cat &copy){
	std::cout << "Meow meow!"<< std::endl;
	*this = copy;
}

Cat	&Cat::operator=(const Cat &assign)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &assign)
		return (*this);
	_name = assign._name;
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Cat &sp)
{
	out << "I'm " + sp.getName() + " and I like otters!" << std::endl;
	return (out);
}

void	Cat::getPolymorphed() const
{
	std::cout << _name + " has been turned into a black cat!" << std::endl;
}

std::string	Cat::getName() const { return (_name); }
