/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:49:29 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/17 19:42:23 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main()
{
	Zombie *zomb1;
	Zombie *zomb2;
	ZombieEvent generateZomb;
	ZombieEvent generateZomb2;

	zomb1 = generateZomb.newZombie("Jack");
	delete zomb1;

	generateZomb.setZombieType("killer");
	zomb2 = generateZomb.newZombie("Sam");
	delete zomb2;

	generateZomb.setZombieType("spark");
	generateZomb2.setZombieType("ilnur");
	generateZomb.randomChump();
	generateZomb2.randomChump();
	return (0);
}
