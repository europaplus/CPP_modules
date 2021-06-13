/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Goner.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:18:59 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/27 17:13:20 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Goner.hpp"

Goner::Goner()
	:
	Enemy(1, "Goner")
{
	std::cout << "Khekhe. Kill me pls!" << std::endl;
}

Goner::~Goner()
{
	std::cout << "Finally.." << std::endl;
}

Goner &Goner::operator=(const Goner &assign)
{
	// std::cout << "Assignation operator called" << std::endl;
	(void)assign;
	if (this == &assign)
		return (*this);
	return (*this);
}

Goner::Goner(const Goner &copy) { *this = copy; }

void	Goner::takeDamage(int damage) { Enemy::takeDamage(damage); }
