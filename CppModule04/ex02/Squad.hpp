/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 13:20:43 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/26 13:01:34 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
# define SQUAD_H

# include "ISquad.hpp"

class Squad : public ISquad
{
	public:
		Squad();
		virtual ~Squad();
		int	getCount() const;
		ISpaceMarine	*getUnit(int) const;
		int	push(ISpaceMarine*);
		Squad(const Squad &copy);
		Squad &operator=(const Squad &assign);
	private:
		typedef struct	s_listUnit
		{
			ISpaceMarine		*_unit;
			struct s_listUnit	*_next;
		}				t_listUnit;
		void	delete_squad();
		int			_countUnit;
		t_listUnit	*_listUnit;
};

#endif
