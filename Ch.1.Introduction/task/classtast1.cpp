/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classtast1.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 10:37:08 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/14 10:44:22 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Numbers {	
	public:
		int		m_n1;
		int		m_n2;
		void	set(int n1, int n2)
		{
			m_n1 = n1;
			m_n2 = n2;
		}
		void	print()
		{
			std::cout << "Numbers (" << m_n1 << ", " << m_n2 << ")" << std::endl;
		}
};

int		main()
{
	Numbers n1;
	n1.set(3, 3);

	Numbers n2 = { 4, 4 };
	n1.print();
	n2.print();
	return (0);
}