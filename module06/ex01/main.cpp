/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/05 15:33:30 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/07/07 13:42:27 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "serialization.hpp"

int	main()
{
	void	*raw;
	Data	*data;

	for (int i = 0; i < 5; ++i)
	{
		raw = serialize();
		data = deserialize(raw);

		std::cout << "ROUND " << i + 1 << '\n';
		std::cout << "-------" << '\n';
		std::cout << data->randomString1 << '\n';
		std::cout << data->randomInt << '\n';
		std::cout << data->randomString2 << '\n';
		std::cout << '\n';

		delete reinterpret_cast<Data*>(raw);
		delete data;
	}
	return 0;
}
