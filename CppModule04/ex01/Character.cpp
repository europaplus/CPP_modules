/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:10:52 by knfonda           #+#    #+#             */
/*   Updated: 2021/04/11 18:05:51 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){}

Character::Character(std::string const &name)
	:
	_name(name),
	_maxAP(40),
	_weapon(nullptr)
{
	// std::cout << "Constructor Character called."<< std::endl;
}

Character::~Character(){
	// std::cout << "Destructor Character called" << std::endl;
}

Character::Character(const Character &copy){
	// std::cout << "Constructor Character called"<< std::endl;
	*this = copy;
}

Character	&Character::operator=(const Character &assign)
{
	// std::cout << "Assignation operator called" << std::endl;
	if (this == &assign)
		return (*this);
	_name = assign.getName();
	_maxAP = assign.getAP();
	_weapon = assign.getWeapon();
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Character &sp)
{
	std::cout << sp.getName() + " has " << sp.getAP()
	<< " and wields a ";
	if (sp.getWeapon() == nullptr)
		std::cout << "unarmed" << std::endl;
	else
		std::cout << sp.getWeapon()->getName() << std::endl;
	return (out);
}

void	Character::recoverAP()
{
	if (_maxAP + 10 > 40)
		_maxAP = 40;
	else
		_maxAP += 10;
}

void	Character::equip(AWeapon *weapon)
{
	_weapon = weapon;
}

void	Character::attack(Enemy *enemy)
{
	if (enemy->getHP() == 0)
	{
		std::cout << _name + " is died." << std::endl;
		return ;
	}
	 if (enemy && _weapon && (_maxAP >= _weapon->getAPCost()))
	 {
		if ((_maxAP -= _weapon->getAPCost()) < 0)
		{
			std::cout << "Not enough AP" << std::endl;
			return ;
		}
		std::cout << _name + " attacks " + enemy->getType() + " with a " + _weapon->getName() << std::endl;
		 _weapon->attack();
		enemy->takeDamage(_weapon->getDamage());
		if (enemy->getHP() == 0)
		{
			std::cout << enemy->getType() << " hp: " << 0 << std::endl;
			delete enemy;
		}
	 }
}

AWeapon *Character::getWeapon() const { return (_weapon); };
std::string Character::getName() const { return (_name); }
int Character::getAP() const { return (_maxAP); }
