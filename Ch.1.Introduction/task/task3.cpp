/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   task3.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 15:01:33 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/13 15:04:25 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	swap(int &x, int &y)
{
	int		buf;

	buf = x;
	x = y;
	y = buf;
}

int		main()
{
	int		x = 5;
	int		y = 7;

	std::cout << x << " " << y << std::endl;
	swap(x, y);
	std::cout << x << " " << y << std::endl;
	return (0);
}