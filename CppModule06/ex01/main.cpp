/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knfonda <knfonda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 14:55:24 by knfonda           #+#    #+#             */
/*   Updated: 2021/04/06 20:14:30 by knfonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#pragma pack(push, 1)

struct Data
{
	std::string str1;
	int			number;
	std::string str2;
};

#pragma pack(pop)

#include <iostream>
#include <unistd.h>

void	*serialize(void)
{
	struct Data *data = new Data;
	std::string	tempString = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	data->number = rand();
	for (int i = 0; i < 10; i++)
		data->str1 += tempString[rand() % 52];
	for (int i = 0; i < 10; i++)
		data->str2 += tempString[rand() % 52];
	std::cout << data->number << std::endl;
	std::cout << data->str1 << std::endl;
	std::cout << data->str2 << std::endl;
	std::cout << sizeof(*data) << std::endl;
	return (reinterpret_cast<void *>(data));
}

Data *deserialize(void *raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int		main(void)
{
	void	*tmp;
	struct Data *data;

	srand(time(0));
	std::cout << "######################SESERIALIZE######################" << std::endl;
	tmp = serialize();
	data = deserialize(tmp);
	std::cout << "######################DESERIALIZE######################" << std::endl;
	std::cout << data->number << std::endl;
	std::cout << data->str1 << std::endl;
	std::cout << data->str2 << std::endl;
	delete data;
	return (0);
}
