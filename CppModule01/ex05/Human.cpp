/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 12:42:11 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/18 13:05:18 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Brain &Human::getBrain(){
	return (_brain);
};
std::string *Human::identify(){
	return (_brain.identify());
};