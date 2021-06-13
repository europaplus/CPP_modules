/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 01:06:56 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/24 13:34:48 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(const std::string &name, const std::string &title)
	:
	_name(name),
	_title(title)
{
	std::cout << _name + ", " + _title + ", " + "is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name + ", " + _title + ", " + "is dead."
	+ " Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &copy)
{
	std::cout << _name + ", " + _title + ", " + "is born!" << std::endl;
	*this = copy;
}

Sorcerer	&Sorcerer::operator=(const Sorcerer &assign)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &assign)
		return (*this);
	_name = assign._name;
	_title = assign._title;
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Sorcerer &sp)
{
	out << "I am " + sp.getName() + ", " + sp.getTitle()
	+ ", " + "and I like ponies!" << std::endl;
	return (out);
}

void	Sorcerer::polymorph(Victim const &target) const {
	target.getPolymorphed();
}

std::string	Sorcerer::getName() const { return (_name); }

std::string Sorcerer::getTitle() const { return (_title); }
