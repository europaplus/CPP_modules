/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classtask4.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 12:56:56 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/14 13:07:51 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class RGBA {
private:
	uint8_t	m_red;
	uint8_t	m_green;
	uint8_t	m_blue;
	uint8_t	m_alpha;
public:
	RGBA(std::uint8_t red=0, std::uint8_t green=0, std::uint8_t blue=0, std::uint8_t alpha=255)
		: m_red(red), m_green(green), m_blue(blue), m_alpha(alpha)
	{
		m_red = red;
		m_green = green;
		m_blue = blue;
		m_alpha = alpha;
	}
	void	print()
	{
		std::cout << "r=" << static_cast<int>(m_red)
			<< " g=" << static_cast<int>(m_green)
			<< " b=" << static_cast<int>(m_blue) << " a="
			<< static_cast<int>(m_alpha);
	}
};

int		main()
{
	RGBA color(0);
	color.print();
	return (0);
}