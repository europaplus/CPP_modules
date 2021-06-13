/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 17:28:42 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/27 18:30:57 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{ std::cout << "* teleports from space *" << std::endl; }

AssaultTerminator::~AssaultTerminator()
{ std::cout << "I'll be back..." << std::endl; }

void AssaultTerminator::battleCry() const
{ std::cout << "This code is unclean. PURIFY IT!" << std::endl; }

void AssaultTerminator::rangedAttack() const
{ std::cout << "* does nothing *" << std::endl; }

void AssaultTerminator::meleeAttack() const
{ std::cout << "* attacks with chainfists *" << std::endl; }

ISpaceMarine *AssaultTerminator::clone () const
{ return (new AssaultTerminator); }

AssaultTerminator &AssaultTerminator::operator=(const AssaultTerminator &assign)
{
	if (this == &assign)
		return (*this);
	return (*this);
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &copy) { *this = copy; }