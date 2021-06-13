/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 15:37:07 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/27 15:04:45 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string _name;
		int			_cntMateriaEquiped;
		const int	_maxCntMateria;
		AMateria	*_materia[4];
	public:
		Character(std::string name);
		~Character();
		Character(const Character &copy);
		std::string const &getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
		Character &operator=(const Character &assign);
};

#endif