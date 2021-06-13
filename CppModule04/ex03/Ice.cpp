/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 15:27:42 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/27 14:18:57 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
:
	AMateria("ice")
{
}

Ice::~Ice() {}

Ice::Ice(const Ice &copy) { *this = copy; }

Ice &Ice::operator=(const Ice &assign)
{
	if (this == &assign)
		return (*this);
	AMateria::setXP(assign.getXP());
	AMateria::setType(assign.getType());
	return (*this);
}

AMateria *Ice::clone() const { return (new Ice(*this)); }

void	Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}
