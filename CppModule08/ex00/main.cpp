/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 16:42:42 by knfonda           #+#    #+#             */
/*   Updated: 2021/04/10 15:45:23 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int		main(void)
{
	std::vector<int> myVector;

	for (int count = 0; count < 5; ++count)
		myVector.push_back(count);
	try
	{ std::cout << *(easyFind(myVector, 4)) << std::endl; }
	catch (const std::exception &e)
	{ std::cout << e.what() << std::endl;
	throw ; }
	return (0);
}
