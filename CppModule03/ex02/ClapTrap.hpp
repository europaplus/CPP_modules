/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 14:14:32 by knfonda           #+#    #+#             */
/*   Updated: 2021/05/20 16:41:11 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>

class ClapTrap{
	protected:
		unsigned int	_hitPoint;
		unsigned int	_maxHitPoint;
		unsigned int	_energyPoints;
		unsigned int	_maxEnergyPoints;
		unsigned int	_level;
		unsigned int	_meleeAttackDamage;
		unsigned int	_rangedAttackDamage;
		unsigned int	_armorDamageReduction;
		std::string		_name;
	public:
		ClapTrap();
		ClapTrap(
			unsigned int	hitPoint,
			unsigned int	maxHitPoint,
			unsigned int	energyPoints,
			unsigned int	maxEnergyPoints,
			unsigned int	level,
			unsigned int	meleeAttackDamage,
			unsigned int	rangedAttackDamage,
			unsigned int	armorDamageReduction,
			std::string		name);
		ClapTrap(const ClapTrap &copy);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &ClapTrap);
		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string &getName();
		unsigned int getHitPoint();
		unsigned int getMaxHitPoint();
		unsigned int getEnergyPoints();
		unsigned int getMaxEnergyPoints();
		unsigned int getLevel();
		unsigned int getMeleeAttackDamage();
		unsigned int getRangedAttackDamage();
		unsigned int getArmorDamageReduction();

		void	setName(std::string name);
		void	setHitPoint(unsigned int hitPoint);
		void	setMaxHitPoint(unsigned int maxHitPoint);
		void	setEnergyPoints(unsigned int energyPoints);
		void	setMaxEnergyPoints(unsigned int maxEnergyPoints);
		void	setLevel(unsigned int level);
		void	setMeleeAttackDamage(unsigned int meleeAttackDamage);
		void	setRangedAttackDamage(unsigned int rangedAttackDamage);
		void	setArmorDamageReduction(unsigned int armorDamageReduction);
};

#endif
