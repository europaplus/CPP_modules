/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 15:38:57 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/29 14:43:03 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name)
:
	_name(name),
	_cntMateriaEquiped(0),
	_maxCntMateria(4)
{
	for (int i = 0; i < _maxCntMateria; i++)
		_materia[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < _maxCntMateria; i++)
		if (_materia[i])
			delete _materia[i];
}

Character::Character(const Character &copy)
:
	_name(""),
	_cntMateriaEquiped(0),
	_maxCntMateria(4)
{ *this = copy; }

Character &Character::operator=(const Character &assign)
{
	if (this == &assign)
		return (*this);
	for (int i = 0; i < _cntMateriaEquiped; i++)
		delete _materia[i];
	for (int i = 0; i < assign._cntMateriaEquiped; i++)
		equip(assign._materia[i]->clone());
		// _materia[i] = assign._materia[i];
	_cntMateriaEquiped = assign._cntMateriaEquiped;
	return (*this);
}

void Character::equip(AMateria *m)
{
	if (_cntMateriaEquiped != _maxCntMateria && m)
	{
		for (int i = 0; i < _cntMateriaEquiped; i++)
			if (_materia[i] == m)
				return ;
		_materia[_cntMateriaEquiped++] = m;
	}
}

void Character::unequip(int idx)
{
	if ((idx >= 0 && idx < _cntMateriaEquiped) && _materia[idx])
	{
		for (int i = idx; i < (_maxCntMateria - 1); i++)
		{
			_materia[i] = _materia[i + 1];
			_materia[i + 1] = NULL;
		}
		--_cntMateriaEquiped;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if ((idx >= 0 && idx < _cntMateriaEquiped) && _materia[idx])
		_materia[idx]->use(target);
}
std::string const &Character::getName() const { return (_name); }