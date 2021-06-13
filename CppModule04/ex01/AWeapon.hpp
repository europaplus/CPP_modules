/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:46:05 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/25 11:47:44 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
# define AWEAPON_H

# include <iostream>
# include <string>

class AWeapon
{
	private:
		std::string _name;
		int			_APCost;
		int			_damage;
	public:
		AWeapon();
		AWeapon(std::string const &name, int apcost, int damage);
		virtual ~AWeapon();
		AWeapon(const AWeapon &copy);
		AWeapon &operator=(const AWeapon &assign);
		std::string getName() const;
		int	getAPCost() const;
		int	getDamage() const;
		virtual void attack() const = 0;
};

#endif
