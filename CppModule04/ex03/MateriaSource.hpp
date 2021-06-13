/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 16:36:02 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/27 13:12:39 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_source[4];
		int			_countMateria;
		const int	_maxCntMateria;
	public:
		MateriaSource();
		~MateriaSource();
		void learnMateria(AMateria *);
		AMateria *createMateria(std::string const &type);
};

#endif