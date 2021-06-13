/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 16:03:03 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/17 19:40:57 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

# include "Zombie.hpp"

class ZombieEvent {
	private:
		std::string _type;
		std::string _name;
	public:
		ZombieEvent();
		~ZombieEvent(){};
		Zombie	*newZombie(std::string name);
		void	setZombieType(std::string type);
		void	randomChump();
};

#endif
