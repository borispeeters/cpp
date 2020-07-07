/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   serialize.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/05 15:02:54 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/07/07 13:43:04 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "serialization.hpp"

void	*serialize(void)
{
	static bool	seeded = false;
	Data		*data = new Data();
	std::string	alphaNum = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	if (!seeded)
	{
		std::srand(std::time(0));
		std::rand();
		seeded = true;
	}

	for (int i = 0; i < 8; ++i)
	{
		data->randomString1.push_back(alphaNum[std::rand() % 62]);
		data->randomString2.push_back(alphaNum[std::rand() % 62]);
	}
	data->randomInt = std::rand();

	return reinterpret_cast<void*>(data);
}
