/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 13:29:26 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/26 13:05:20 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_H
# define ASSAULTTERMINATOR_H

# include <iostream>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator();
		virtual ~AssaultTerminator();
		ISpaceMarine* clone() const;
		void	battleCry() const;
		void	rangedAttack() const;
		void	meleeAttack() const;
		AssaultTerminator(const AssaultTerminator &copy);
		AssaultTerminator &operator=(const AssaultTerminator &assign);
};

#endif
