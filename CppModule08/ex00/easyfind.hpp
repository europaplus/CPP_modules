/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 16:43:00 by knfonda           #+#    #+#             */
/*   Updated: 2021/04/07 12:58:59 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef EAZYFIND_HPP
# define EAZYFIND_HPP

# include <vector>
# include <iostream>
# include <algorithm>

template <typename T>
typename T::iterator easyFind(T &tmp, int elem)
{
	typename T::iterator it;

	it = find(tmp.begin(), tmp.end(), elem);
	if (it == tmp.end())
		throw std::logic_error("Element not found");
	return (it);
}

#endif
