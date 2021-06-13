/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:15:12 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/18 15:05:37 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>
# include <string>

class Weapon {
	private:
		std::string _typeWeapon;
	public:
	Weapon(const std::string &typeWeapon) : _typeWeapon(typeWeapon){};
	~Weapon(){};
	const std::string &getType() const;
	void		setType(const std::string typeWeapon);
};

#endif