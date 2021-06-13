/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:52:44 by knfonda           #+#    #+#             */
/*   Updated: 2021/04/03 14:19:25 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

#define UNITS 2

void	main_test()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;

	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
}

void	check_errors()
{
	Squad squad;

	squad.push(new TacticalMarine);
	squad.push(new AssaultTerminator);
	std::cout << squad.getUnit(0) << std::endl;
	std::cout << squad.getUnit(1) << std::endl;
	std::cout << squad.getCount() << std::endl;
	std::cout << squad.getCount() << " -> " << squad.push(NULL) << std::endl;
	std::cout << squad.getCount() << " -> " << squad.push(squad.getUnit(UNITS - 1)) << std::endl;
	std::cout << squad.getCount() << " -> " << squad.push(squad.getUnit(UNITS)) << std::endl;
	std::cout << squad.getCount() << " -> " << squad.push(squad.getUnit(UNITS + 1)) << std::endl;
	std::cout << squad.getUnit(-1) << std::endl;
	std::cout << squad.getUnit(10000) << std::endl;
}

void	copy_constructor_assignation()
{
	Squad squad;

	squad.push(new TacticalMarine);
	squad.push(new AssaultTerminator);
	std::cout << "####### COPY CONSTRUCTOR #######" << std::endl;
	Squad squad2(squad);
	std::cout << squad.getUnit(0) << std::endl;
	std::cout << squad.getUnit(1) << std::endl;
	std::cout << squad.getCount() << std::endl;
	std::cout << "#######" << std::endl;
	std::cout << squad2.getUnit(0) << std::endl;
	std::cout << squad2.getUnit(1) << std::endl;
	std::cout << squad2.getCount() << std::endl;

	std::cout << "####### CHECK ASSIGNTATION OPERATOR #######" << std::endl;
	squad2 = squad;
	std::cout << squad2.getUnit(0) << std::endl;
	std::cout << squad2.getUnit(1) << std::endl;
	std::cout << squad2.getCount() << std::endl;
}

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	Squad s1;
	Squad s2;
	s1.push(bob);
	std::cout << s1.getUnit(0) << std::endl;
	s2 = s1;
	std::cout << s1.getUnit(0) << std::endl;
	std::cout << s2.getUnit(0) << std::endl;
	// main_test();
	//  check_errors();
//	copy_constructor_assignation();
	return 0;
}
