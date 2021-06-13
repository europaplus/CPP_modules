/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 19:26:12 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/18 11:55:51 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
	std::cout << "Zombie here.." << std::endl;
	_type = "Ivanovich";
	_name = "Ivan";
}

Zombie::Zombie(const std::string name, const std::string type) : _name(name), _type(type){
	std::cout << "Zombie here.." << std::endl;
	announce();
}

void	Zombie::announce()
{
	std::cout << "<" + getName() + " (" + getType() + ")> Braiiiiiiinnnssss..." << std::endl;
}

Zombie::~Zombie(){
	std::cout << _name + " died" << std::endl;
}

std::string &Zombie::getName(){ return (this->_name); };
std::string &Zombie::getType(){ return (this->_type); };
