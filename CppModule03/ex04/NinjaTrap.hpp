/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 15:58:08 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/23 13:34:17 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
# define NINJATRAP_H

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : virtual public ClapTrap {
	public:
		NinjaTrap();
		NinjaTrap(std::string name);
		~NinjaTrap();
		NinjaTrap(const NinjaTrap &copy);
		NinjaTrap &operator=(const NinjaTrap &NinjaTrap);
		void	ninjaShoeBox(FragTrap &fragTrap);
		void	ninjaShoeBox(ClapTrap &clapTrap);
		void	ninjaShoeBox(ScavTrap &scavTrap);
		void	ninjaShoeBox(NinjaTrap &ninjaTrap);
};

#endif
