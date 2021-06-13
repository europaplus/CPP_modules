/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:18:59 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/24 20:08:48 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
	:
	Enemy(170, "Super Mutant")
{
	std::cout << "Gaaag. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant &SuperMutant::operator=(const SuperMutant &assign)
{
	std::cout << "Assignation operator called" << std::endl;
	(void)assign;
	if (this == &assign)
		return (*this);
	return (*this);
}

SuperMutant::SuperMutant(const SuperMutant &copy)
{
	*this = copy;
}

void	SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}
