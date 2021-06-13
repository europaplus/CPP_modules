/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 15:05:51 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/18 15:06:47 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack(){
	std::cout << _name + " attacks with his "
		+ _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon){
	_weapon = &weapon;
}
