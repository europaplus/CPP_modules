/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 16:38:04 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/27 14:49:20 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
:
	_countMateria(0),
	_maxCntMateria(4)
{
	for (int i = 0; i < _maxCntMateria; i++)
		_source[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < _maxCntMateria; i++)
		if (_source[i])
			delete _source[i];
}

void MateriaSource::learnMateria(AMateria *materia)
{
	if (_countMateria <= _maxCntMateria)
	{
		_source[_countMateria] = materia->clone();
		_countMateria += 1;
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < _countMateria; i++)
	{
		if (_source[i]->getType() == type)
			return (_source[i]->clone());
	}
	return (NULL);
}
