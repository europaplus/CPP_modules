/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 18:26:14 by knfonda           #+#    #+#             */
/*   Updated: 2021/04/05 12:37:03 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

#include <iostream>
#include <string>

class Convert
{
	private:
		const char	*_strCStyle;
		double		_numberDouble;
		std::string _strString;
		char		*_endptr;
	public:
		Convert(const char *str) : _strCStyle(str), _numberDouble(0)
		{
			_strString = _strCStyle;
			if (_strString.length() == 1 && isdigit(_strCStyle[0]) == 0)
				_numberDouble = static_cast<double>(_strCStyle[0]);
			else
				_numberDouble = std::strtod(_strCStyle, &_endptr);
		};
		~Convert() {};
		operator int();
		operator char();
		operator float();
		operator double();

		class Impossible : public std::exception
		{
			private:
				const char *_msg;
			public:
				Impossible(const char *msg) : _msg(msg) {}
				~Impossible() throw();
				const char *what() const throw();
		};
};

#endif
