/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 17:28:42 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/27 18:31:04 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{ std::cout << "Tactical Marine ready for battle" << std::endl; }

TacticalMarine::~TacticalMarine()
{ std::cout << "Aaargh..." << std::endl; }

void TacticalMarine::battleCry() const
{ std::cout << "For the holy PLOT" << std::endl; }

void TacticalMarine::rangedAttack() const
{ std::cout << "* attacks with a bolter *" << std::endl; }

void TacticalMarine::meleeAttack() const
{ std::cout << "* attacks with a chainsword" << std::endl; }

ISpaceMarine *TacticalMarine::clone () const
{ return (new TacticalMarine); }

TacticalMarine &TacticalMarine::operator=(const TacticalMarine &assign)
{
	if (this == &assign)
		return (*this);
	return (*this);
}

TacticalMarine::TacticalMarine(const TacticalMarine &copy) { *this = copy; }