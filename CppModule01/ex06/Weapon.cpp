/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 15:03:57 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/18 15:06:32 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string	&Weapon::getType() const{
	return (_typeWeapon);
}

void	Weapon::setType(const std::string typeWeapon) {
	_typeWeapon = typeWeapon;
}
