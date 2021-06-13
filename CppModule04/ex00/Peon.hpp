/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 03:04:09 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/27 16:21:13 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
# define PEON_H

# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon : public Victim {
	public:
		Peon();
		Peon(const std::string &name);
		virtual ~Peon();
		Peon(const Peon &copy);
		Peon &operator=(const Peon &assign);
		std::string	getName() const;
		virtual void	getPolymorphed() const;
};

std::ostream	&operator<<(std::ostream &out, const Peon &sp);

#endif
