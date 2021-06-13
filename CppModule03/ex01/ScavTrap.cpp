/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 12:54:58 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/21 16:23:35 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
	:
	_hitPoint(100),
	_maxHitPoint(100),
	_energyPoints(100),
	_maxEnergyPoints(100),
	_level(1),
	_meleeAttackDamage(30),
	_rangedAttackDamage(20),
	_armorDamageReduction(5),
	_name(name)
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

void	ScavTrap::rangedAttack(std::string const &target){
	std::cout << _name + " attacks " + target + " at range, causing " <<
	_rangedAttackDamage << " points of damage" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const &target){
	std::cout << _name + " attacks " + target + " at melee, causing " <<
	_meleeAttackDamage << " points of damage" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount){
	amount -= _armorDamageReduction;
	if (_hitPoint == 0)
		std::cout << "Health " + _name + " already " << _hitPoint << std::endl;
	else
	{
		if (amount > _hitPoint)
			amount = _hitPoint;
		_hitPoint -= amount;
		std::cout << "Health " + _name + " dropped to " << _hitPoint << std::endl;
	}
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if ((_hitPoint + amount) > _maxHitPoint)
		_hitPoint = 100;
	else
	{
		std::cout << "Health! Eww, what flavor is red? Sweet life juice! Yahooo! ";
		_hitPoint += amount;
		std::cout << _hitPoint << std::endl;
	}
}

std::string &ScavTrap::getName(){ return (_name); }
unsigned int ScavTrap::getMeleeAttackDamage(){ return (_meleeAttackDamage); }
unsigned int ScavTrap::getRangedAttackDamage(){ return (_rangedAttackDamage); }
