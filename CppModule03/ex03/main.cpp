/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 11:51:36 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/22 15:53:09 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main()
{
	FragTrap a("FragTrap");
	ScavTrap b("ScavTrap");

	a.meleeAttack(b.getName());
	b.takeDamage(a.getMeleeAttackDamage());
	a.vaulthunter_dot_exe(b.getName());
	b.takeDamage(25);
	return (0);
}
