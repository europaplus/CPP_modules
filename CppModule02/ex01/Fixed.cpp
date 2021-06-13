/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 12:04:14 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/20 19:33:46 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _base(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int value) {
	std::cout << "Int constructor called" << std::endl;
	_base = value << _fracBits;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy){
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

int	Fixed::getRawBits(void) const {
	return (_base); 
}

void Fixed::setRawBits(int const raw){
	_base = raw;
}

Fixed::Fixed(const float number) {
	std::cout << "Float constructor called" << std::endl;
	_base = static_cast<int>(roundf(number * (1 << _fracBits)));
}

Fixed	&Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &fixed)
		return (*this);
	_base = fixed.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fp)
{
	out << fp.toFloat();
	return out;
}

float Fixed::toFloat(void) const {
	return ((float)_base / (1 << _fracBits));
}

int	Fixed::toInt() const {
	return ((int)(_base >> _fracBits));
}
