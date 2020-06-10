/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/31 01:45:21 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/10 12:20:40 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main()
{
	Zombie		*heapZombie;
	Zombie		stackZombie("Stan", "Walker");
	ZombieEvent	event;

	stackZombie.announce();

	event.setZombieType("Biter");
	heapZombie = event.randomChump();
	delete heapZombie;

	event.setZombieType("Chewer");
	heapZombie = event.randomChump();
	delete heapZombie;

	event.setZombieType("Runner");
	heapZombie = event.newZombie("Bob");
	heapZombie->announce();
	delete heapZombie;
	
	return 0;
}
