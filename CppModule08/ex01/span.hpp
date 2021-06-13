/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 12:23:01 by knfonda           #+#    #+#             */
/*   Updated: 2021/04/07 13:00:55 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>

class Span
{
	private:
		unsigned int		_N;
		std::vector<int>	_mass;
		std::vector<int>	_sortMass;
	public:
		Span();
		Span(unsigned int N);
		~Span();
		Span(const Span &copy);
		Span &operator=(const Span &assign);
		int	&operator[](unsigned int idx)
		{
			if (idx < 0 || idx >= _N)
				throw std::runtime_error("Don't have element[index].");
			return (_mass[idx]);
		};
		void	addNumber(int number);
		void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int		shortestSpan();
		int		longestSpan();
		unsigned int	getSize() const { return (_mass.size()); };
};

#endif
