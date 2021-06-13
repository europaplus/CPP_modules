/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:48:07 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/27 18:54:00 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
:
	_countUnit(0),
	_listUnit(NULL)
{
}

Squad::~Squad(){ delete_squad(); }

int	Squad::getCount() const { return (_countUnit); }

ISpaceMarine *Squad::getUnit(int index) const
{
	int		i = 0;
	t_listUnit *tmp = NULL;

	tmp = _listUnit;
	if (index < 0 || index > _countUnit)
	{
		std::cout << "Wrong index. Does not exist ";
		return (NULL);
	}
	while (i < _countUnit)
	{
		if (index == i)
			break ;
		if (tmp->_next)
			tmp = tmp->_next;
		i++;
	}
	return (tmp->_unit);
}

int	Squad::push(ISpaceMarine *element)
{
	t_listUnit	*tmp = NULL;
	t_listUnit	*last = NULL;

	if (!element)
		return (1);
	last = _listUnit;
	if (_listUnit == NULL)
	{
		_listUnit = new t_listUnit;
		_listUnit->_unit = element;
		_listUnit->_next = NULL;
		_countUnit += 1;
		return (0);
	}
	while (1)
	{
		if (last->_unit == element)
			return (1);
		if (last->_next == NULL)
			break ;
		last = last->_next;
	}
	tmp = new t_listUnit;
	tmp->_unit = element;
	tmp->_next = NULL;
	_countUnit += 1;
	last->_next = tmp;
	return (0);
}

Squad &Squad::operator=(const Squad &assign)
{
	if (this == &assign)
		return (*this);
	delete_squad();
	t_listUnit *tmp = NULL;

	if (assign._countUnit != 0)
	{
		tmp = assign._listUnit;
		for (int i = 0; i < assign._countUnit; i++)
		{
			push(tmp->_unit->clone());
			if (tmp->_next)
				tmp = tmp->_next;
		}
		_countUnit = assign._countUnit;
	}
	else
	{
		_countUnit = 0;
		_listUnit = NULL;
	}
	return (*this);
}

void	Squad::delete_squad()
{
	t_listUnit *tmp = NULL;
	t_listUnit *start = NULL;

	if (_listUnit)
	{
		start = _listUnit;
		tmp = start;
		for (int i = 0; i < _countUnit; i++)
		{
			delete start->_unit;
			delete start;
			if (i < _countUnit - 1)
				tmp = tmp->_next;
			start = tmp;
		}
		_listUnit = NULL;
	}
}

Squad::Squad(const Squad &copy)
:
	_countUnit(0),
	_listUnit(NULL)
{
	*this = copy;
}
