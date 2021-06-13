/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Goner.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:18:47 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/27 17:11:52 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GONER_H
# define GONER_H

# include "Enemy.hpp"

class Goner : public Enemy
{
	private:
	protected:
	public:
		Goner();
		Goner(const Goner &copy);
		virtual ~Goner();
		Goner &operator=(const Goner &assign);
		void takeDamage(int);
};

#endif
