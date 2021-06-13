/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 15:27:42 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/27 13:38:03 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
:
	AMateria("cure")
{
}

Cure::~Cure() {}

Cure::Cure(const Cure &copy) { *this = copy; }

Cure &Cure::operator=(const Cure &assign)
{
	if (this == &assign)
		return (*this);
	AMateria::setXP(assign.getXP());
	AMateria::setType(assign.getType());
	return (*this);
}

AMateria *Cure::clone() const { return (new Cure(*this)); }

void	Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " + target.getName() + "'s wounds *" << std::endl;
}
