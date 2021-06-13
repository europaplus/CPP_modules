/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 15:09:08 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/27 14:40:33 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

# include <iostream>
# include <string>
class AMateria;
# include "ICharacter.hpp"


class AMateria
{
	private:
		std::string _type;
		unsigned int _xp;
	public:
		AMateria();
		AMateria(std::string const &type);
		virtual ~AMateria();
		std::string const &getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP
		void	setXP(unsigned int xp);
		void	setType(std::string type);
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
		AMateria(const AMateria &copy);
		AMateria &operator=(const AMateria &assign);
};

#endif