/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:19:24 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/19 13:09:41 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class HumanA {
	private:
		Weapon		&_weapon;
		std::string	_name;
	public:
		HumanA(const std::string &name, Weapon &weapon) : _weapon(weapon), _name(name){};
		void attack();
};

#endif
