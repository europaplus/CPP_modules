/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classtask3.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 12:24:55 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/14 12:37:54 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Ball {
private:
	std::string m_color;
	double m_radius;
public:
	Ball(double radius){
		m_radius = radius;
		m_color = "red";
	}
	Ball(const std::string &color="red", double radius=20.0){
		m_color = color;
		m_radius = radius;
	}
	// Ball(std::string color="Red", double radius=20.0){
	// 	m_color = color;
	// 	m_radius = radius;
	// }
	void	print()
	{
		std::cout << "Color: " << m_color << " Radius: " << m_radius << '\n';
	}
};

int		main()
{
    Ball def;
    def.print();
 
	Ball black("black");
	black.print();
	
	Ball thirty(30.0);
	thirty.print();
	Ball blackThirty("black", 30.0);
	blackThirty.print();
	return (0);
}