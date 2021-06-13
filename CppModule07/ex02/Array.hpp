/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 18:57:17 by knfonda           #+#    #+#             */
/*   Updated: 2021/04/03 13:24:17 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>
#include <string>
#include <iomanip>

template <class T>
class Array
{
	private:
		unsigned int	_size;
		T				*_array;
	public:
		Array(){ _size = 0; _array = NULL; };
		Array(unsigned int size)
		:
			_size(size)
		{ _array = new T[size]; }
		Array(const Array &copy)
		{ *this = copy; }
		Array &operator=(const Array &assign)
		{
			if (*this == &assign)
				return (*this);
			if  (_array != NULL)
				delete[] _array;
			_size = assign._size;
			_array = new T[_size];
			for (int i = 0; i < assign->_size; i++)
				_array[i] = assign._array[i];
			return (*this);
		}
		~Array(){ delete[] _array; };
		T	&operator[](unsigned int idx)
		{
			if (idx < 0 || idx >= _size)
				throw Except("Don't have element[index].");
			return (_array[idx]);
		};
		int	getSize() { return (_size); };
	class Except : public std::exception
	{
		private:
			const char *_msg;
		public:
			Except(const char *msg) : _msg(msg) {};
			~Except() throw() {};
			const char *what() const throw() { return (_msg); };
	};
};

#endif