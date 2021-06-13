/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:10:52 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/24 20:13:11 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(){}

Enemy::Enemy(int hp, std::string const &type)
	:
	_hp(hp),
	_type(type)
{
	// std::cout << "Constructor Enemy called."<< std::endl;
}

Enemy::~Enemy(){
	// std::cout << "Destructor Enemy called" << std::endl;
}

Enemy::Enemy(const Enemy &copy){
	// std::cout << "Constructor Enemy called"<< std::endl;
	*this = copy;
}

Enemy	&Enemy::operator=(const Enemy &assign)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &assign)
		return (*this);
	_hp = assign.getHP();
	_type = assign.getType();
	return (*this);
}

void	Enemy::takeDamage(int damage)
{
	if (_hp > 0)
		_hp = (damage > _hp ? 0 : _hp - damage);
}

std::ostream	&operator<<(std::ostream &out, const Enemy &sp)
{
	out << "HP: " << sp.getHP() << ", TYPE: " + sp.getType();
	return (out);
}

int	Enemy::getHP() const { return (_hp); }
std::string Enemy::getType() const { return (_type); }
void	Enemy::setHP(int hp) { _hp = hp; }