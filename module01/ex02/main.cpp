/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/31 01:45:21 by bpeeters       #+#    #+#                */
/*   Updated: 2020/04/01 01:09:46 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main()
{
	Zombie		*heapZombie;
	Zombie		stackZombie("Stan", "Walker");

	ZombieEvent::setZombieType("Biter");
	heapZombie = ZombieEvent::randomChump();
	delete heapZombie;

	stackZombie.announce();

	ZombieEvent::setZombieType("Chewer");
	heapZombie = ZombieEvent::randomChump();
	delete heapZombie;

	ZombieEvent::setZombieType("Runner");
	heapZombie = ZombieEvent::newZombie("Bob");
	heapZombie->announce();
	delete heapZombie;
	
	return 0;
}
