/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/31 22:45:15 by bpeeters       #+#    #+#                */
/*   Updated: 2020/04/01 01:37:21 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieHorde.hpp"

int	main()
{
	ZombieHorde	horde(2);
	std::cout << '\n';
	ZombieHorde	biggerHorde(5);
	return 0;
}
