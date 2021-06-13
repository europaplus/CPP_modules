/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:49:35 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/18 11:46:18 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>
# include <cstdlib>

class Zombie {
	private:
		std::string _name;
		std::string _type;
	public:
		Zombie(const std::string name, const std::string type);
		Zombie();
		~Zombie();
		void	announce();
		std::string &getName();
		std::string &getType();
		void		setName(std::string name) { _name = name; };
		void		setType(std::string type) { _type = type; };
};

#endif
