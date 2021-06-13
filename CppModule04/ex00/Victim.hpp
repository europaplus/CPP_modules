/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 01:24:20 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/24 13:42:22 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
# define VICTIM_H

# include <iostream>
# include <string>

class Victim {
	protected:
		std::string _name;
	private:
	public:
		Victim();
		Victim(const std::string &name);
		virtual ~Victim();
		Victim(const Victim &copy);
		Victim &operator=(const Victim &assign);
		std::string	getName() const;
		virtual void	getPolymorphed() const;
};

std::ostream	&operator<<(std::ostream &out, const Victim &sp);

#endif
