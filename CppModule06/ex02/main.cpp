/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 11:55:09 by knfonda           #+#    #+#             */
/*   Updated: 2021/04/03 17:18:49 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Base {public: virtual ~Base(){}; };
class A : public Base {};
class B : public Base {};
class C : public Base {};

Base	*generate(void)
{
	std::string generate[3] = {"A", "B", "C"};
	int		i = 0;

	i = rand() % 3;
	if (generate[i] == "A")
	{
		std::cout << "GENERATE CLASS A " << std::endl;
		return (new A);
	}
	if (generate[i] == "B")
	{
		std::cout << "GENERATE CLASS B " << std::endl;
		return (new B);
	}
	if (generate[i] == "C")
	{
		std::cout << "GENERATE CLASS C " << std::endl;
		return (new C);
	}
	return (NULL);
}

void	identify_from_pointer(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Dynamic_cast ptr in A" << std::endl;
	if (dynamic_cast<B *>(p))
		std::cout << "Dynamic_cast ptr in B" << std::endl;
	if (dynamic_cast<C *>(p))
		std::cout << "Dynamic_cast ptr in C" << std::endl;
}

void	identify_from_reference(Base &p)
{
	try {
		Base &a = dynamic_cast<A&>(p);
		std::cout << "Dynamic_cast ptr in A" << std::endl;
		(void)a;
	} catch (const std::bad_cast &e) {(void)e;}
	try {
		Base &b = dynamic_cast<B&>(p);
		std::cout << "Dynamic_cast ptr in B" << std::endl;
		(void)b;
	} catch (const std::bad_cast &e) {(void)e;}
	try {
		Base &c = dynamic_cast<C&>(p);
		std::cout << "Dynamic_cast ptr in C" << std::endl;
		(void)c;
	} catch (const std::bad_cast &e) {(void)e;}
}

int		main(void)
{
	srand(time(0));
	Base *ptr = generate();
	identify_from_pointer(ptr);
	identify_from_reference(*ptr);
	delete ptr;
	return (0);
}
