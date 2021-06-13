/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 13:29:26 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/26 13:32:05 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_H
# define TACTICALMARINE_H

# include <iostream>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine();
		virtual ~TacticalMarine();
		ISpaceMarine* clone() const;
		void	battleCry() const;
		void	rangedAttack() const;
		void	meleeAttack() const;
		TacticalMarine(const TacticalMarine &copy);
		TacticalMarine &operator=(const TacticalMarine &assign);
};

#endif
