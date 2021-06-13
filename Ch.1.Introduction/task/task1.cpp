/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   task1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 14:32:53 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/13 14:43:12 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

enum ItemTypes {
	TORCHS,
	POTIONS,
	ARROWS,
	MAX_ITEM,
};

int		countTotalItems(int *player)
{
	int		totalItems = 0;

	for (int index = 0; index < MAX_ITEM; index++)
		totalItems += player[index];
	return (totalItems);
}

int		main()
{
	int		player[MAX_ITEM] = { 3, 6, 12 };

	std::cout << "The player has " << countTotalItems(player) << " items in total.\n";
	return (0);
}