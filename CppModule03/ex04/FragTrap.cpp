/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 12:54:58 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/23 13:54:38 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
	:
	ClapTrap()
{
	_hitPoint = 100;
	_maxHitPoint = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	_name = "";
	std::cout << "FRG_TP : \"Let's get this party started!\"" << std::endl;
	srand(std::time(nullptr));
}

FragTrap::FragTrap(std::string name)
	:
	ClapTrap()
{
	_hitPoint = 100;
	_maxHitPoint = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	_name = name;
	std::cout << "FRG_TP : \"Let's get this party started!\"" << std::endl;
	srand(std::time(nullptr));
}

FragTrap::~FragTrap(){
	std::cout << "FRG_TP : \"I'm getting sleepy.. zzzzz... Zzzzz... It was cool.. I have nothing to regret!\""
	<< std::endl;
}

FragTrap::FragTrap(const FragTrap &copy){
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

FragTrap	&FragTrap::operator=(const FragTrap &fragTrap)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &fragTrap)
		return (*this);
	_name = fragTrap._name;
	_hitPoint = fragTrap._hitPoint;
	_maxHitPoint = fragTrap._maxHitPoint;
	_energyPoints = fragTrap._energyPoints;
	_maxEnergyPoints = fragTrap._maxEnergyPoints;
	_level = fragTrap._level;
	_meleeAttackDamage = fragTrap._meleeAttackDamage;
	_rangedAttackDamage = fragTrap._rangedAttackDamage;
	_armorDamageReduction = fragTrap._armorDamageReduction;
	return (*this);
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (_energyPoints < 25)
	{
		std::cout << "Not enough energy" << std::endl;
		return ;
	}
	std::string nameOfAttack[] = { 
		" mode on laser Inferno. Laaasers! booogie time.. ", " mode on pirate Ship mode. Avast ye scurvy dogs! ",
		" mode on one Shot Wonder. Kill, reload! Kill, reload! KILL! RELOAD! ",
		" mode on gun Wizard. You can call me Gundalf! "};
	std::cout << _name + " attacks " + target + nameOfAttack[rand() % 4] << 25 << " points of damage" << std::endl;
	_energyPoints -= 25;
}
