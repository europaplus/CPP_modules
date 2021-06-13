/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 12:05:09 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/18 13:23:24 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

# include <string>
# include <iostream>
# include "Brain.hpp"

class Human {
	private:
	Brain	_brain;
	public:
	Human(){};
	~Human(){};
	Brain &getBrain();
	std::string *identify();
};

#endif