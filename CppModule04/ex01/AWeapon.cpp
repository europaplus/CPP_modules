/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:10:52 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/24 20:08:04 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(){}

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
	:
	_name(name),
	_APCost(apcost),
	_damage(damage)
{
	// std::cout << "Constructor AWeapon called."<< std::endl;
}

AWeapon::~AWeapon(){
	// std::cout << "Destructor AWeapon called" << std::endl;
}

AWeapon::AWeapon(const AWeapon &copy){
	std::cout << "Constructor AWeapon called"<< std::endl;
	*this = copy;
}

AWeapon	&AWeapon::operator=(const AWeapon &assign)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &assign)
		return (*this);
	_name = assign._name;
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const AWeapon &sp)
{
	out << "I'm " + sp.getName() + " and I like otters!" << std::endl;
	return (out);
}

std::string	AWeapon::getName() const { return (_name); }
int	AWeapon::getAPCost() const { return (_APCost); };
int	AWeapon::getDamage() const { return (_damage); };