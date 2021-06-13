/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rocket.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:18:59 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/27 17:10:09 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rocket.hpp"

Rocket::Rocket()
	:
	AWeapon("Rocket", 40, 100)
{
	// std::cout << "Constructor Rocket called" << std::endl;
}

Rocket::~Rocket()
{
	// std::cout << "Distructor Rocket called" << std::endl;
}

Rocket &Rocket::operator=(const Rocket &assign)
{
	// std::cout << "Assignation operator called" << std::endl;
	(void)assign;
	if (this == &assign)
		return (*this);
	return (*this);
}

Rocket::Rocket(const Rocket &copy) { *this = copy; }

void	Rocket::attack() const { std::cout << "* BAAAAABAAAAAAH *" << std::endl; }
