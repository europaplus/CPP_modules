/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:06:56 by knfonda           #+#    #+#             */
/*   Updated: 2021/04/27 20:32:49 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

std::string Contact::info_name[11] = {
	"first name",
	"last name",
	"nickname",
	"login",
	"postal address",
	"email address",
	"phone number",
	"birthday date",
	"favorite meal",
	"underwear color",
	"darkest secret"
};

int		Contact::m_next(0);

void	Contact::ADD(){
	if (m_next == 8)
	{
		std::cout << "Contact list full" << std::endl;
		return ;
	}
	for (size_t i = 0; i <= info_name->length(); i++)
	{
		std::cout << "Enter the " << info_name[i] << ": ";
		std::getline(std::cin, m_info[i]);
		if (std::cin.eof())
		{
			std::cout << "exit" << std::endl;
			exit(EXIT_FAILURE);
		}
		// if (m_info[i] == "")
		// {
		// 	--i;
		// 	continue ;
		// }
	}
	++m_next;
}

void	Contact::SEARCH(int index) {
	std::cout << std::setw(10) << (index + 1) << "|";
	for (int i = 0; i < 4; i++)
	{
		if (m_info[i].length() >= 10)
		{
			std::cout << m_info[i].substr(0, 9);
			std::cout << '.' << '|';
		}
		else
			std::cout << std::setw(10) << m_info[i] << '|';
	}
	std::cout << std::endl;
}

void	Contact::PRINT()
{
	for (size_t i = 0; i <= info_name->length(); i++)
		std::cout << info_name[i] << ": " << m_info[i] << std::endl;
}
