/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:49:29 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/18 11:56:28 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int		main()
{
	{
		std::cout << "##GENERATE 5 ZOMBIE##" << std::endl;
		ZombieHorde generateHorde1(5);
		generateHorde1.announce();
		std::cout << "##GENERATE 10 ZOMBIE##" << std::endl;
		ZombieHorde generateHorde2(10);
		generateHorde2.announce();		
	}
	while(1);
	return (0);
}
