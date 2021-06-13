/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classtask2.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 11:00:43 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/14 11:27:21 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Stack {
private:
	int		m_array[10];
	int		m_next;
public:
	void	reset()
	{
		m_next = 0;
		for (int i = 0; i < 10; i++)
			m_array[i] = 0;
	}
	bool	push(int value)
	{
		if (m_next == 10)
			return (false);
		m_array[m_next] = value;
		++m_next;
		return (true);
	}
	int		pop()
	{
		assert(m_next > 0 && "Stack is empty\n");
		return (m_array[--m_next]);
	}
	void	print()
	{
		std::cout << "( ";
		for (int i = 0; i < m_next; ++i)
			std::cout << m_array[i] << ' ';
		std::cout << ")\n";
	}
};

int		main()
{
	Stack stack;
	stack.reset();
	// stack.pop();
	stack.print();
 
	stack.push(3);
	stack.push(7);
	stack.push(5);
	stack.print();
 
	stack.pop();
	stack.print();
 
	stack.pop();
	stack.pop();
 
	stack.print();
	return (0);
}
