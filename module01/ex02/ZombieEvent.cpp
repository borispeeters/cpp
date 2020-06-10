/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/31 18:16:23 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/10 12:17:36 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <string>
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
}

void		ZombieEvent::setZombieType(std::string type)
{
	m_zombieType = type;
}

std::string	ZombieEvent::getZombieType()
{
	return m_zombieType;
}

Zombie*		ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name, m_zombieType);
	return zombie;
}

std::string	ZombieEvent::randomName()
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

Zombie*		ZombieEvent::randomChump()
{
	Zombie	*zombie;
	zombie = new Zombie(randomName(), ZombieEvent::m_zombieType);
	zombie->announce();
	return zombie;
}
