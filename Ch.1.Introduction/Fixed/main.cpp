/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 13:01:05 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/20 18:17:25 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FixedPoint.hpp"

int main()
{
	std::cout << 4.12345678f << std::endl;
	std::cout << 0.12345678f << std::endl;
	std::cout << roundf(42.42 * (1 << 8)) << std::endl;
	// FixedPoint a(42.42f);
	// std::cout << a << '\n';
	// FixedPoint a(37, 58);
	// std::cout << a << '\n';
 
	// FixedPoint b(-3, 9);
	// std::cout << b << '\n';
 
	// FixedPoint c(4, -7);
	// std::cout << c << '\n';
 
	// FixedPoint d(-5, -7);
	// std::cout << d << '\n';
 
	// FixedPoint e(0, -3);
	// std::cout << e << '\n';
 
	// std::cout << static_cast<double>(e) << '\n';
 
	return 0;
}