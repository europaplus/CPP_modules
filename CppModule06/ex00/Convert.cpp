/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:59:32 by knfonda           #+#    #+#             */
/*   Updated: 2021/04/05 12:32:40 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::operator int() {
	if ((_strString == "inf" || _strString == "inff" || _strString == "+inf"
	|| _strString == "-inf" || _strString == "nan" || _strString == "nanf"
	|| _strString == "+inff" || _strString == "-inff") || (*_endptr != '\0' && _strString.length() != 1
	&& _strString[_strString.length() - 1] != 'f'))
		throw Impossible("impossible");
	if (_numberDouble < std::numeric_limits<int>::min() || _numberDouble > std::numeric_limits<int>::max())
		throw (Impossible("Overflow"));
	return (static_cast<int>(_numberDouble));
};

Convert::operator char()
{
	if ((_strString == "inf" || _strString == "inff" || _strString == "+inf"
	|| _strString == "-inf" || _strString == "nan" || _strString == "nanf"
	|| _strString == "+inff" || _strString == "-inff") || (*_endptr != '\0' && _strString.length() != 1
	&& _strString[_strString.length() - 1] != 'f'))
		throw Impossible("impossible");
	if (_numberDouble < std::numeric_limits<char>::min() || _numberDouble > std::numeric_limits<char>::max())
		throw (Impossible("Overflow"));
	if (static_cast<int>(_numberDouble) <= 32 || static_cast<int>(_numberDouble) >= 126)
		throw Impossible("Non displayable");
	return (static_cast<char>(_numberDouble));
};

Convert::operator float() {
	if (*_endptr != '\0' && _strString.length() != 1 && _strString[_strString.length() - 1] != 'f')
		throw Impossible("impossible");
	return (static_cast<float>(_numberDouble));
}

Convert::operator double()
{
	if (*_endptr != '\0' && _strString.length() != 1 && _strString[_strString.length() - 1] != 'f')
		throw Impossible("impossible");
	return (_numberDouble);
};

const char *Convert::Impossible::what() const throw()
{ return (Impossible::_msg); }

Convert::Impossible::~Impossible () throw() {};
