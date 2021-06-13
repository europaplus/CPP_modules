/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 17:23:22 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/23 13:42:24 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_H
# define SUPERTRAP_H

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
	public:
		SuperTrap();
		SuperTrap(std::string name);
		~SuperTrap();
		SuperTrap(const SuperTrap &copy);
		SuperTrap &operator=(const SuperTrap &SuperTrap);
		using FragTrap::rangedAttack;
		using NinjaTrap::meleeAttack;
};

#endif
