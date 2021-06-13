/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   task4.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 15:05:38 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/13 16:31:22 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	printCString(const char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
		std::cout << str[i];
}

int		main()
{
	printCString("Hello world!\n");
	return (0);
}