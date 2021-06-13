/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 14:14:24 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/22 15:51:29 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	:
	_hitPoint(0),
	_maxHitPoint(0),
	_energyPoints(0),
	_maxEnergyPoints(0),
	_level(0),
	_meleeAttackDamage(0),
	_rangedAttackDamage(0),
	_armorDamageReduction(0),
	_name("")
{
	std::cout << _name + "Constructor ClapTrap" << std::endl;
	srand(std::time(nullptr));
};

ClapTrap::ClapTrap(
	unsigned int	hitPoint,
	unsigned int	maxHitPoint,
	unsigned int	energyPoints,
	unsigned int	maxEnergyPoints,
	unsigned int	level,
	unsigned int	meleeAttackDamage,
	unsigned int	rangedAttackDamage,
	unsigned int	armorDamageReduction,
	std::string		name)
{
	std::cout << _name + "Constructor ClapTrap" << std::endl;
	_name = name;
	_hitPoint = hitPoint;
	_maxHitPoint = maxHitPoint;
	_energyPoints = energyPoints;
	_maxEnergyPoints = maxEnergyPoints;
	_level = level;
	_meleeAttackDamage = meleeAttackDamage;
	_rangedAttackDamage = rangedAttackDamage;
	_armorDamageReduction = armorDamageReduction;	
	srand(std::time(nullptr));
}

ClapTrap::~ClapTrap(){
	std::cout << "Distructor ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy){
	std::cout << "Copy constructor ClapTrap called" << std::endl;
	*this = copy;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &ClapTrap)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &ClapTrap)
		return (*this);
	_name = ClapTrap._name;
	_hitPoint = ClapTrap._hitPoint;
	_maxHitPoint = ClapTrap._maxHitPoint;
	_energyPoints = ClapTrap._energyPoints;
	_maxEnergyPoints = ClapTrap._maxEnergyPoints;
	_level = ClapTrap._level;
	_meleeAttackDamage = ClapTrap._meleeAttackDamage;
	_rangedAttackDamage = ClapTrap._rangedAttackDamage;
	_armorDamageReduction = ClapTrap._armorDamageReduction;
	return (*this);
}

void	ClapTrap::rangedAttack(std::string const &target){
	std::cout << _name + " attacks " + target + " at range, causing " <<
	_rangedAttackDamage << " points of damage" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const &target){
	std::cout << _name + " attacks " + target + " at melee, causing " <<
	_meleeAttackDamage << " points of damage" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
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

void	ClapTrap::beRepaired(unsigned int amount)
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

std::string 	&ClapTrap::getName(){ return (_name); }
unsigned int 	ClapTrap::getHitPoint(){ return (_hitPoint); }
unsigned int 	ClapTrap::getMaxHitPoint(){ return (_maxHitPoint); }
unsigned int 	ClapTrap::getEnergyPoints(){ return (_energyPoints); }
unsigned int 	ClapTrap::getMaxEnergyPoints(){ return (_maxEnergyPoints); }
unsigned int 	ClapTrap::getLevel(){ return (_level); }
unsigned int 	ClapTrap::getMeleeAttackDamage(){ return (_meleeAttackDamage); }
unsigned int 	ClapTrap::getRangedAttackDamage(){ return (_rangedAttackDamage); }
unsigned int 	ClapTrap::getArmorDamageReduction(){ return (_armorDamageReduction); }

void			ClapTrap::setName(std::string name){ _name = name; }
void			ClapTrap::setHitPoint(unsigned int hitPoint){ _hitPoint = hitPoint; }
void			ClapTrap::setMaxHitPoint(unsigned int maxHitPoint){ _maxHitPoint = maxHitPoint; }
void			ClapTrap::setEnergyPoints(unsigned int energyPoints){ _energyPoints = energyPoints; }
void			ClapTrap::setMaxEnergyPoints(unsigned int maxEnergyPoints){ _maxEnergyPoints = maxEnergyPoints; }
void			ClapTrap::setLevel(unsigned int level){ _level = level; }
void			ClapTrap::setMeleeAttackDamage(unsigned int meleeAttackDamage){ _meleeAttackDamage = meleeAttackDamage; }
void			ClapTrap::setRangedAttackDamage(unsigned int rangedAttackDamage){ _rangedAttackDamage = rangedAttackDamage; }
void			ClapTrap::setArmorDamageReduction(unsigned int armorDamageReduction){ _armorDamageReduction = armorDamageReduction; }
