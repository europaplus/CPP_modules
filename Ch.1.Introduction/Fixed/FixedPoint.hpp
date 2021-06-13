/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedPoint.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 13:01:57 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/20 17:22:56 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXEDPOINT_H
# define FIXEDPOINT_H

# include <iostream>
# include <sstream>
# include <iomanip>
# include <cmath>

class FixedPoint{
	private:
	int		_base;
	double	_decimal;
	int		_poryadok;
	public:
		FixedPoint(const int base, const int decimal) : _base(base), _decimal(decimal){
			// Обработать переполнение...
			if (_base < 0 || _decimal < 0)
			{
				if (_base > 0)
					_base = -_base;
				if (_decimal > 0)
					_decimal = -_decimal;
			}
		};
		FixedPoint(const float number) {
			_poryadok = 1;
			_base = static_cast<int>(number);
			std::cout << _base << std::endl;
			std::stringstream ss;
			ss << number;
			std::string strNum = ss.str();
			size_t pos = strNum.find('.');
			std::cout << "str " << strNum << std::endl;
			if (pos != std::string::npos)
			{
				_decimal = (number - _base);
				// for (int i = 0; i < (strNum.size() - 1 - pos); i++)
				// {
				// 	_decimal *= 10;
				// 	_poryadok *= 10;
				// 	_poryadok *= 10;
				// }
				std::cout << "dec - " << std::setprecision(8) << _decimal << std::endl;
			}
			else
				_decimal = 0;
		};
		operator float() const
		{
			return (_base + (_decimal / _poryadok));
		}
		int	toInt()
		{
			return (_base);
		}
		friend std::ostream& operator<<(std::ostream &out, const FixedPoint &fp)
		{
			out << static_cast<float>(fp);
			return out;
		}
		const int	getBase() const { return (_base); };
		const int	getDecimal() const {
			return (_decimal);
		};
};

// std::ostream& operator<<(std::ostream &out, const FixedPoint &fixed){
// 	out << fixed.getBase() << '.' << fixed.getDecimal();
// 	return (out);
// };

#endif