/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 14:01:15 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/19 10:02:01 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony (std::string name,
		std::string favoriteFood,
		std::string petName,
		std::string elementOfHarmony,
		std::string doNotLike)
{
	_name = name;
	_favoriteFood = favoriteFood;
	_petName = petName;
	_elementOfHarmony = elementOfHarmony;
	_doNotLike = doNotLike;
}

void	Pony::ponyInfo ()
{
	std::cout << "Name pony: " << this->_name << std::endl;
	std::cout << "Favorite food: " << this->_favoriteFood << std::endl;
	std::cout << "Name of pet: " << this->_petName << std::endl;
	std::cout << "Harmony element: " << this->_elementOfHarmony << std::endl;
	std::cout << "She don't like: " << this->_doNotLike << std::endl;
}