/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 12:02:43 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/18 12:03:35 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : _countZombie(N) {
	std::string nameOfZombie[] = {
		"Tumbler",	"Mutant",	"Sludger",	"Bambino",	"Sliver",
		"Flamer",	"Gobbler",	"Sloucher",	"Oozer",	"Carrier",
	};
	srand(std::time(nullptr));
	_zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
		_zombies[i].setName(nameOfZombie[rand() % 10]);
}
void	ZombieHorde::announce() {
	for (int i = 0; i < _countZombie; i++)
		std::cout << "<" + _zombies[i].getName() + " (" + _zombies[i].getType() + ")> Braiiiiiiinnnssss..." << std::endl;
};
ZombieHorde::~ZombieHorde() {
	delete[] _zombies;
}