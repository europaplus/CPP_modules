/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 13:17:15 by knfonda           #+#    #+#             */
/*   Updated: 2021/03/16 17:58:24 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

int		checkNumber(int	next)
{
	while (true)
	{
		int	number;
		std::cout << "Enter the number of page: ";
		std::cin >> number;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767,'\n');
		} if (std::cin.eof())
		{
			std::cout << "exit" << std::endl;
			exit(EXIT_FAILURE);
		}
		else
		{
			if (number < 1 || number > 8 || number > next)
				continue ;
			return (number);
		}
	}
	return (0);
}

int		main()
{
	Contact page[8];
	std::string buf;

	std::cout << "|PHONE BOOK|" << std::endl;
	while(1)
	{
		std::cin >> buf;
		std::cin.ignore();
		if (std::cin.eof())
		{
			std::cout << "exit" << std::endl;
			exit(EXIT_FAILURE);
		}
		if (buf.compare("ADD") == 0)
			page[page->get_Next()].ADD();
		if (buf.compare("SEARCH") == 0)
		{
			if (page->get_Next() == 0)
			{
				std::cout << "PhoneBook is empty" << std::endl;
				continue ;
			}
			for (int index = 0; index < page->get_Next(); index++)
				page[index].SEARCH(index);
			int	number;
			number = checkNumber(page->get_Next());
			page[number - 1].PRINT();
		}
		if (buf.compare("EXIT") == 0)
			break ;
	}
	return (0);
}
