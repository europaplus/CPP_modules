/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:46:05 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/24 15:43:41 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
# define ENEMY_H

# include <iostream>
# include <string>

class Enemy
{
	private:
		int	_hp;
		std::string _type;
	public:
		Enemy();
		Enemy(int hp, std::string const &type);
		virtual ~Enemy();
		Enemy(const Enemy &copy);
		Enemy &operator=(const Enemy &assign);
		int	getHP() const;
		std::string getType() const;
		virtual void takeDamage(int);
		void	setHP(int hp);
};

#endif
