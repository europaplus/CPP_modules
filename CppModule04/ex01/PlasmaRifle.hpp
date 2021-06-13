/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:18:47 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/27 16:36:35 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_H
# define PLASMARIFLE_H

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	private:
	protected:
	public:
		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle &copy);
		virtual ~PlasmaRifle();
		PlasmaRifle &operator=(const PlasmaRifle &assign);
		void	attack() const;
};

#endif
