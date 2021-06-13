/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:46:05 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/24 15:43:41 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	private:
		std::string _name;
		int	_maxAP;
		AWeapon *_weapon;
	public:
		Character();
		Character(std::string const &name);
		~Character();
		Character(const Character &copy);
		Character &operator=(const Character &assign);
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string getName() const;
		int getAP() const;
		AWeapon *getWeapon() const;
};

std::ostream	&operator<<(std::ostream &out, const Character &sp);

#endif
