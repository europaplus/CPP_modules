/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 15:21:05 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/27 15:47:09 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
:
	_type(""),
	_xp(0)
{
}

AMateria::AMateria(std::string const &type)
:
	_type(type),
	_xp(0)
{}

AMateria::~AMateria() {}

void AMateria::setType(std::string type) { _type = type; }

void AMateria::setXP(unsigned int xp) { _xp = xp; }

std::string const &AMateria::getType() const { return (_type); }

unsigned int AMateria::getXP() const { return (_xp); }

void AMateria::use(ICharacter &target)
{
	(void)target;
	_xp += 10;
}

AMateria &AMateria::operator=(const AMateria &assign)
{
	if (this == &assign)
		return (*this);
	_xp = assign.getXP();
	_type = assign.getType();
	return (*this);
}

AMateria::AMateria(const AMateria &copy) { *this = copy; }
