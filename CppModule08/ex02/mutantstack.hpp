/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 13:02:59 by knfonda           #+#    #+#             */
/*   Updated: 2021/04/17 18:40:05 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <vector>
# include <iostream>
# include <string>

template <class T>
class MutantStack : public std::stack<T>
{
	private:
	public:
		MutantStack(){};
		~MutantStack(){};
		MutantStack(const MutantStack &copy){ (void)copy; };
		MutantStack &operator=(const MutantStack &assign){ (void)assign; };
		class iterator;
		iterator begin() { return (&this->top()); }
		iterator end() {
			iterator tmp = this->begin();
			for (size_t i = 0; i < this->size(); i++)
				++tmp;
			return (tmp);
		}
		class iterator
		{
			private:
				T* cur;
			public:
				iterator(T *first) : cur(first) {};
				T &operator++(int) {return (*(cur--)); };
				T &operator--(int) {return (*(cur++)); };
				T &operator++() {return (*(cur--)); };
				T &operator--() {return (*(cur++)); };
				bool operator!=(const iterator &it) { return (cur != it.cur); };
				bool operator==(const iterator &it) { return (cur == it.cur); };
				T &operator*() { return (*cur); };
		};
};

#endif