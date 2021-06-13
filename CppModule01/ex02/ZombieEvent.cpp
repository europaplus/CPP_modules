/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 19:38:36 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/17 19:41:59 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(){
	_type = "default";
}

Zombie	*ZombieEvent::newZombie(std::string name){
	Zombie *newzombie = new Zombie(name, _type);

	return (newzombie);
}

void	ZombieEvent::setZombieType(std::string type) {
	_type = type;
}

void	ZombieEvent::randomChump(){
	std::string nameOfZombie[4] = {
		"Jack",
		"Sam",
		"Denys",
		"Aleks",
	};
	srand(std::time(nullptr));
	_name = nameOfZombie[rand() % 4];
	Zombie randomZomb(_name, _type);
}
