/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 17:26:07 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/23 13:48:34 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
	:
	FragTrap(),
	NinjaTrap()
{
	std::cout << "SuperTrap constructor create" << std::endl;
	_name = "";
	_hitPoint = FragTrap::_hitPoint;
	_maxHitPoint = FragTrap::_maxHitPoint;
	_energyPoints = NinjaTrap::_energyPoints;
	_maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
	_level = FragTrap::_level;
	_meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
	_rangedAttackDamage = FragTrap::_rangedAttackDamage;
	_armorDamageReduction = FragTrap::_armorDamageReduction;
}

SuperTrap::SuperTrap(std::string name)
	:
	FragTrap(name),
	NinjaTrap(name)
{
	std::cout << "SuperTrap constructor create" << std::endl;
	_name = name;
	_hitPoint = FragTrap::_hitPoint;
	_maxHitPoint = FragTrap::_maxHitPoint;
	_energyPoints = NinjaTrap::_energyPoints;
	_maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
	_level = FragTrap::_level;
	_meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
	_rangedAttackDamage = FragTrap::_rangedAttackDamage;
	_armorDamageReduction = FragTrap::_armorDamageReduction;
}

SuperTrap::~SuperTrap(){
	std::cout << _name + " destructor SuperTrap called" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &copy){
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

SuperTrap	&SuperTrap::operator=(const SuperTrap &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &copy)
		return (*this);
	_name = copy._name;
	_hitPoint = copy._hitPoint;
	_maxHitPoint = copy._maxHitPoint;
	_energyPoints = copy._energyPoints;
	_maxEnergyPoints = copy._maxEnergyPoints;
	_level = copy._level;
	_meleeAttackDamage = copy._meleeAttackDamage;
	_rangedAttackDamage = copy._rangedAttackDamage;
	_armorDamageReduction = copy._armorDamageReduction;
	return (*this);
}
