/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 12:54:58 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/22 15:44:38 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
	:
	ClapTrap(
		100,	// HitPoint
		100,	// MaxHitPoint
		100,	// EergyPoints
		100,	// MaxEnergyPoints
		1,		// Level
		30,		// MeleeAttackDamage
		20,		// RangedAttackDamage
		5,		// ArmorDamageReduction
		""		// Name
	)
{
	std::cout << _name + ": \"Let's get this party started!\"" << std::endl;
	srand(std::time(nullptr));
}

ScavTrap::ScavTrap(std::string name)
	:
	ClapTrap(
		100,	// HitPoint
		100,	// MaxHitPoint
		100,	// EergyPoints
		100,	// MaxEnergyPoints
		1,		// Level
		30,		// MeleeAttackDamage
		20,		// RangedAttackDamage
		5,		// ArmorDamageReduction
		name	// Name
	)
{
	std::cout << _name + ": \"Let's get this party started!\"" << std::endl;
	srand(std::time(nullptr));
}

ScavTrap::~ScavTrap(){
	std::cout << _name
	+ ": \"I'm getting sleepy.. zzzzz... Zzzzz... It was cool.. I have nothing to regret!\""
	<< std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy){
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &ScavTrap)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &ScavTrap)
		return (*this);
	_name = ScavTrap._name;
	_hitPoint = ScavTrap._hitPoint;
	_maxHitPoint = ScavTrap._maxHitPoint;
	_energyPoints = ScavTrap._energyPoints;
	_maxEnergyPoints = ScavTrap._maxEnergyPoints;
	_level = ScavTrap._level;
	_meleeAttackDamage = ScavTrap._meleeAttackDamage;
	_rangedAttackDamage = ScavTrap._rangedAttackDamage;
	_armorDamageReduction = ScavTrap._armorDamageReduction;
	return (*this);
}

void	ScavTrap::challengeNewcomer(std::string const &target)
{
	if (_energyPoints < 25)
	{
		std::cout << "Not enough energy" << std::endl;
		return ;
	}
	std::string challengeOfNewComer[] = { 
		" Fisticuffs!: Kill 25 enemies with melee attacks ",
		" Fisticuffs!: Kill 25 enemies with ranged attacks ",
		" Open 50 lootable chests, lockers, and other objects ",
		" Kill 50 enemies during the day "
	};
	std::cout << target + challengeOfNewComer[rand() % 4] << std::endl;
	_energyPoints -= 25;
}
