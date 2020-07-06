/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/05 15:33:30 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/07/05 23:01:40 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "serialization.hpp"

int	main()
{
	void	*raw;
	Data	*data;

	raw = serialize();
	data = deserialize(raw);

	std::cout << data->randomString1 << '\n';
	std::cout << data->randomInt << '\n';
	std::cout << data->randomString2 << '\n';

	delete static_cast<char*>(raw);
	delete data;
	return 0;
}
