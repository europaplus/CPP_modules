/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 13:20:48 by knfonda           #+#    #+#             */
/*   Updated: 2021/04/06 17:07:52 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span() : _N(0) {}

Span::Span(unsigned int N) : _N(N) {}

Span::~Span(){ }

Span::Span(const Span &copy){ *this = copy; }
Span &Span::operator=(const Span &assign)
{
	if (this != &assign)
	{
		if (!(_mass.empty()))
		{
			_mass.clear();
			_sortMass.clear();
		}
		_N = assign._N;
		for (unsigned int i = 0; i < assign.getSize(); i++)
		{
			_mass.push_back(assign._mass[i]);
			_sortMass.push_back(assign._mass[i]);
		}
		std::sort(_sortMass.begin(), _sortMass.end());
	}
	return (*this);
}

void	Span::addNumber(int number)
{
	if (_mass.size() == _N)
		throw std::out_of_range("Error: Out of range");
	_mass.push_back(number);
	_sortMass.push_back(number);
	std::sort(_sortMass.begin(), _sortMass.end());
}

void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if ((end - begin + _mass.size()) > _N)
		throw std::out_of_range("Error: Out of range");
	std::vector<int>::iterator it;
	std::vector<int>::iterator it2;
	it = _mass.begin() + _mass.size();
	it2 = _sortMass.begin() + _mass.size();
	_mass.insert(it, begin, end);
	_sortMass.insert(it2, begin, end);
	std::sort(_sortMass.begin(), _sortMass.end());
}

int		Span::shortestSpan()
{
	if (_mass.size() <= 1)
		throw std::runtime_error("Error: Not enough element");
	std::vector<int>::iterator max;
	std::vector<int>::iterator min;
	min = _sortMass.begin();
	max = _sortMass.begin();
	return (*(++min) - *(max));
}
int		Span::longestSpan()
{
	if (_mass.size() <= 1)
		throw std::runtime_error("Not enough element");
	std::vector<int>::iterator max;
	std::vector<int>::iterator min;
	min = _sortMass.begin();
	max = _sortMass.end();
	return (*(--max) - *(min));
}
