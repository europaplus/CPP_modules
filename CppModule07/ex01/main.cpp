/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 17:59:08 by knfonda           #+#    #+#             */
/*   Updated: 2021/04/05 15:39:53 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int		main()
{
	const int	size = 3;
	int			array1[size] = {1, 2, 3};
	// double		array2[size] = {1.0, 2.0, 3.0};

	iter(array1, 3, &print);
	// iter(array2, 3, &print);
	return (0);
}
