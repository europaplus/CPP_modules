/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:14:25 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/19 10:02:42 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap()
{
	Pony *ponyHeap = new Pony("Sparkle", "Pancakes", "Sovelia", "The power of magic", "Сhaos");

	ponyHeap->ponyInfo();
	std::cout << "Variable deleting on heap" << std::endl;;
	delete ponyHeap;
}

void	ponyOnTheStack()
{
	Pony ponyStack("Rarity", "Black caviar", "Opalesens", "Love for fashion", "Feeling constrained");

	ponyStack.ponyInfo();
	std::cout << "Variable deleting on stack" << std::endl;
 } // local visibility ponyStack destroyed

int		main()
{
	std::cout << "Create pony on Heap" << std::endl;
	ponyOnTheHeap();
	std::cout << "Create pony on Stack" << std::endl;
	ponyOnTheStack();
	return (0);
}
