/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptrfnc.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 17:09:46 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/13 17:23:02 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef int	(*arithmeticFcn)(int, int);

int			getInteger()
{
	int		number;

	std::cout << "Enter an integer number: ";
	std::cin >> number;
	return (number);
}

char		getOperation()
{
	char	number;

	std::cout << "Enter an operation: ";
	std::cin >> number;
	return (number);	
}

int			add(int a, int b)
{
	return (a + b);
}

int			subtract(int a, int b)
{
	return (a - b);
}

int			multiply(int a, int b)
{
	return (a * b);
}

int			divide(int a, int b)
{
	return (a / b);
}


arithmeticFcn	getArithmeticFcn(char symbol)
{
	if (symbol == '+')
		return (add);
	if (symbol == '-')
		return (subtract);
	if (symbol == '*')
		return (multiply);
	if (symbol == '/')
		return (divide);
	return (0);
}

int			main()
{
	int		a = getInteger();
	char	op = getOperation();
	int		b = getInteger();

	arithmeticFcn fcn = getArithmeticFcn(op);
	std::cout << a << ' ' << op << ' ' << b << " = " << fcn(a, b) << '\n';
	return (0);
}