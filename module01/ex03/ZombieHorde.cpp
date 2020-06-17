/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/31 22:16:01 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/17 09:59:52 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "ZombieHorde.hpp"

#include <iostream>

ZombieHorde::ZombieHorde(int N)
{
	m_zombies = new Zombie[N];
	for (int i = 0; i < N; ++i)
	{
		m_zombies[i].setName(randomName());
		m_zombies[i].setType("Biter");
		m_zombies[i].announce();
	}
}

ZombieHorde::~ZombieHorde()
{
	delete[] m_zombies;
}

std::string	ZombieHorde::randomName()
{
	static bool	seeded = false;
	if (!seeded)
	{
		std::srand(static_cast<unsigned int>(std::time(0)));
		std::rand();
		seeded = true;
	}
	std::string	pool[] = {"Harry", "Frank", "Juan", "Theo", "Oakley", "Clementine",
	"Emelia", "Annabel", "Anika", "Anastasia", "Barend", "Dirk", "Guus", "Karen", "Mia", "Harper"};
	const int				arrayLength = sizeof(pool)/sizeof(pool[0]);
	static const double fraction = 1.0 / (RAND_MAX + 1.0);

	return pool[static_cast<int>(arrayLength * (std::rand() * fraction))];
}
