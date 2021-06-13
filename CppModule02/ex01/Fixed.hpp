/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 12:04:17 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/20 19:09:13 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed {
	private:
		int		_base;
		const static int _fracBits = 8;
	public:
		Fixed();
		Fixed(const float number);
		Fixed(const int value);
		~Fixed();
		float toFloat(void) const;
		int	toInt() const;
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &fixed);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};
std::ostream	&operator<<(std::ostream &out, const Fixed &fp);

#endif