/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 12:22:29 by knfonda           #+#    #+#             */
/*   Updated: 2021/04/06 17:13:59 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int		RandomNumber(void) { return (std::rand() % 100); }

void	main_test(void)
{
	try
	{
		Span sp = Span(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
		std::cout << "longest: " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e) { std::cout << e.what() << std::endl; }	
}

void	test1(void)
{
	try
	{
		Span sp = Span(1000);
		std::vector<int> myVector(1000);
		std::generate(myVector.begin(), myVector.end(), RandomNumber);

		std::cout << "myVector contains:";
		for (std::vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it)
			std::cout << ' ' << *it;
		std::cout << '\n';
		sp.addNumber(myVector.begin(), myVector.end());
		std::cout << "size of _mass: " << sp.getSize() << std::endl;
		for (unsigned int i = 0; i < sp.getSize(); i ++)
			std::cout << ' ' << sp[i];
		std::cout << '\n';
		std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
		std::cout << "longest: " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e) { std::cout << e.what() << std::endl; }
}

void	test2(void)
{
	try
	{
		Span sp = Span(10);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::vector<int> myVector(5);
		std::generate(myVector.begin(), myVector.end(), RandomNumber);
		std::cout << "myVector contains:";
		for (std::vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it)
			std::cout << ' ' << *it;
		std::cout << '\n';

		sp.addNumber(myVector.begin(), myVector.end());
		std::cout << "size of _mass: " << sp.getSize() << std::endl;
		for (unsigned int i = 0; i < sp.getSize(); i ++)
			std::cout << ' ' << sp[i];
		std::cout << '\n';
		std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
		std::cout << "longest: " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e) { std::cout << e.what() << std::endl; }	
}

void	test3(void)
{
	try
	{
		Span sp = Span(1);
		sp.addNumber(5);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e) { std::cout << e.what() << std::endl; }	
}

void	test4(void)
{
	try
	{
		Span sp = Span(1);
		sp.addNumber(5);
		sp.addNumber(3);
	}
	catch (const std::exception &e) { std::cout << e.what() << std::endl; }	
}

void	test5(void)
{
	try
	{
		Span sp = Span(1);
		sp.addNumber(5);
		std::cout << "Size sp2: " << sp.getSize() << "\nElement sp2[0]: " << sp[0] << std::endl;

		Span sp2(sp);
		std::cout << "Size sp2: " << sp2.getSize() << "\nElement sp2[0]: " << sp2[0] << std::endl;
	}
	catch (const std::exception &e) { std::cout << e.what() << std::endl; }	
}

int		main(void)
{
	main_test();
	// test1();
	// test2();
	// test3();
	// test4();
	// test5();
	return (0);
}
