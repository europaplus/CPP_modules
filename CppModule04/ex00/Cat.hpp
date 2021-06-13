/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 03:09:45 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/24 13:42:25 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include <iostream>
# include <string>
# include "Victim.hpp"

class Cat : public Victim {
	private:
	protected:
	public:
		Cat();
		Cat(const std::string &name);
		virtual ~Cat();
		Cat(const Cat &copy);
		Cat &operator=(const Cat &assign);
		std::string	getName() const;
		virtual void	getPolymorphed() const;
};

std::ostream	&operator<<(std::ostream &out, const Cat &sp);

#endif
