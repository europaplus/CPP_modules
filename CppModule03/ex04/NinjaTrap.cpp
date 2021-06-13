/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 15:58:05 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/23 14:07:45 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
	:
	ClapTrap()
{
	_name = "";
	_hitPoint = 60;
	_maxHitPoint = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
	_level = 1;
	std::cout << "NINJA-TP: \"パーティを始めましょう！\"" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name)
	:
	ClapTrap()
{
	_name = name;
	_hitPoint = 60;
	_maxHitPoint = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
	_level = 1;
	std::cout << "NINJA-TP: \"パーティを始めましょう！\"" << std::endl;
}

NinjaTrap::~NinjaTrap(){
	std::cout << "NINJA-TP: \"眠くなってきました..zzzzz ... Zzzzz ...かっこよかったです..後悔することは何もありません！\"" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &copy){
	std::cout << "NINJA-TP: と呼ばれるコピーコンストラクタ" << std::endl;
	*this = copy;
}

NinjaTrap	&NinjaTrap::operator=(const NinjaTrap &NinjaTrap)
{
	std::cout << "NINJA-TP: と呼ばれる割り当て演算子" << std::endl;
	if (this == &NinjaTrap)
		return (*this);
	_name = NinjaTrap._name;
	_hitPoint = NinjaTrap._hitPoint;
	_maxHitPoint = NinjaTrap._maxHitPoint;
	_energyPoints = NinjaTrap._energyPoints;
	_maxEnergyPoints = NinjaTrap._maxEnergyPoints;
	_level = NinjaTrap._level;
	_meleeAttackDamage = NinjaTrap._meleeAttackDamage;
	_rangedAttackDamage = NinjaTrap._rangedAttackDamage;
	_armorDamageReduction = NinjaTrap._armorDamageReduction;
	return (*this);
}

void	NinjaTrap::ninjaShoeBox(FragTrap &fragTrap)
{
	std::cout << _name + "攻撃(attack) " + fragTrap.getName() << std::endl;
}

void	NinjaTrap::ninjaShoeBox(ClapTrap &clapTrap)
{
	std::cout << _name + "攻撃(attack) " + clapTrap.getName() << std::endl;
}

void	NinjaTrap::ninjaShoeBox(NinjaTrap &ninjaTrap)
{
	std::cout << _name + "攻撃(attack) " + ninjaTrap.getName() << std::endl;
}

void	NinjaTrap::ninjaShoeBox(ScavTrap &scavTrap)
{
	std::cout << _name + "攻撃(attack) " + scavTrap.getName() << std::endl;
}
