/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:18:47 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/27 16:39:44 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_H
# define RADSCORPION_H

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	private:
	protected:
	public:
		RadScorpion();
		RadScorpion(const RadScorpion &copy);
		virtual ~RadScorpion();
		RadScorpion &operator=(const RadScorpion &assign);
		void takeDamage(int);
};

#endif
