/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rocket.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:18:47 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/27 17:10:41 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROCKET_H
# define ROCKET_H

# include "AWeapon.hpp"

class Rocket : public AWeapon
{
	private:
	protected:
	public:
		Rocket();
		Rocket(const Rocket &copy);
		virtual ~Rocket();
		Rocket &operator=(const Rocket &assign);
		void	attack() const;
};

#endif
