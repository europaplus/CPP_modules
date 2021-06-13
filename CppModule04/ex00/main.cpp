/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 03:13:21 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/27 16:24:38 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Cat.hpp"

void	main_test(void)
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
}

void	test_with_antoher_victim(void)
{
	Sorcerer robert("Robert", "the Magnificent");
	Cat	sam("Sam");

	std::cout << robert << sam;
	robert.polymorph(sam);
}

int main()
{
	// main_test();
	test_with_antoher_victim();
	return 0; 
}
