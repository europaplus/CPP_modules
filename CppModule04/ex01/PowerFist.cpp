/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:18:59 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/24 15:43:37 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist()
	:
	AWeapon("Power Fist", 8, 50)
{
	// std::cout << "Constructor PowerFist called" << std::endl;
}

PowerFist::~PowerFist()
{
	// std::cout << "Distructor PowerFist called" << std::endl;
}

PowerFist &PowerFist::operator=(const PowerFist &assign)
{
	std::cout << "Assignation operator called" << std::endl;
	(void)assign;
	if (this == &assign)
		return (*this);
	return (*this);
}

PowerFist::PowerFist(const PowerFist &copy)
{
	*this = copy;
}

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
