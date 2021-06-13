/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:15:13 by knfonda           #+#    #+#             */
/*   Updated: 2021/04/24 21:47:53 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Character.hpp"
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Goner.hpp"
#include "Rocket.hpp"

void	main_test()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	delete(pr);
	delete(pf);
	delete(me);
}

void	test_minimum_hp()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	me->attack(b);
	delete(pr);
	delete(me);
}

void	test_another_one()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new Goner();
	AWeapon* pr = new Rocket();
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	delete(pr);
	delete(me);
}

int main()
{
Character* me = new Character("me");
std::cout << *me;
RadScorpion *c = new RadScorpion();
RadScorpion a;
a = *c;
	return 0;
}