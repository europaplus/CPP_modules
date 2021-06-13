/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:15:04 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/17 14:11:34 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

# include <iostream>
# include <string>

class Pony {
private:
	std::string _name;
	std::string _favoriteFood;
	std::string _petName;
	std::string _elementOfHarmony;
	std::string _doNotLike;
public:
	Pony(std::string name,
		std::string favoriteFood,
		std::string petName,
		std::string elementOfHarmony,
		std::string doNotLike);
	void		ponyInfo();
	~Pony() { std::cout << "Pony died" << std::endl; };
};

#endif