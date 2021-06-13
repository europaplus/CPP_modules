/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:18:59 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/24 20:00:54 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
	:
	AWeapon("Plasma Rifle", 5, 21)
{
	// std::cout << "Constructor PlasmaRifle called" << std::endl;
}

PlasmaRifle::~PlasmaRifle()
{
	// std::cout << "Distructor PlasmaRifle called" << std::endl;
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &assign)
{
	std::cout << "Assignation operator called" << std::endl;
	(void)assign;
	if (this == &assign)
		return (*this);
	return (*this);
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &copy)
{
	*this = copy;
}

void	PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
