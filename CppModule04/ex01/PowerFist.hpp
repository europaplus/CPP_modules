/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:18:47 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/24 15:45:15 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_H
# define POWERFIST_H

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	private:
	protected:
	public:
		PowerFist();
		PowerFist(const PowerFist &copy);
		virtual ~PowerFist();
		PowerFist &operator=(const PowerFist &assign);
		void	attack() const;
};

#endif
