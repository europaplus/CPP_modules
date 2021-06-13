/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ITER.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 17:23:24 by knfonda           #+#    #+#             */
/*   Updated: 2021/04/02 15:19:52 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>
#include <iomanip>

template <typename T>
void	iter(T *ptr, int size, void (*func)(T &a))
{
	for (int i = 0; i < size; i++)
		func(ptr[i]);
}

template <typename T>
void	print(T	&a)
{
	std::cout << std::fixed << std::setprecision(1) << a << std::endl;
}

#endif