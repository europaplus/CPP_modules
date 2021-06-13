/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:41:14 by knfonda           #+#    #+#             */
/*   Updated: 2021/04/17 18:38:07 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

void	main_test(void)
{
	MutantStack<int> mstack;
	mstack.push(6);
	mstack.push(17);
	mstack.pop();
	mstack.push(3); mstack.push(5); mstack.push(737); //[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << "Element: " << *it << std::endl;
		++it;
	}
	std::stack<int>	s(mstack);
}

void	test2(void)
{
	MutantStack<int> mstack;
	for (int i = 0; i < 10; i++)
		mstack.push(i);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	while (it != ite)
	{
		std::cout << "Element: " << *it << std::endl;
		++it;
	}
	ite = mstack.begin();
	std::cout << "##################" << std::endl;
	while (it != ite)
	{
		--it;
		std::cout << "Element: " << *it << std::endl;
	}	
}

int		main(void)
{
	main_test();
	// test2();
	return (0);
}
