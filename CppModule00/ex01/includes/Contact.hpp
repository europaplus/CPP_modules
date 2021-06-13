/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:04:41 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/16 18:06:47 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>
# include <iomanip>

class Contact {
private:
	static std::string	info_name[11];
	std::string			m_info[11];
	static int			m_next;
public:
	void	ADD();
	void	SEARCH(int index);
	void	PRINT();
	int		get_Next(){ return (m_next); }
};

#endif