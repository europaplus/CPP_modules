/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 11:51:36 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/23 14:22:59 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "SuperTrap.hpp"

int		main()
{
	// FragTrap a("FragTrap");
	// ScavTrap b("ScavTrap");
	SuperTrap a("SuperTrap");

	std::cout << a.getEnergyPoints() << std::endl;
	a.vaulthunter_dot_exe("SomeEnemy");
	// std::cout << "Hit Point " << a.getHitPoint() << std::endl;
	// std::cout << "Max Energy " << a.getMaxEnergyPoints() << std::endl;
	// a.meleeAttack(b.getName());
	// b.takeDamage(a.getMeleeAttackDamage());
	// a.vaulthunter_dot_exe(b.getName());
	// b.takeDamage(25);
	return (0);
}
