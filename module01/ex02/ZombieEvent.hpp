/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/31 17:47:29 by bpeeters       #+#    #+#                */
/*   Updated: 2020/04/01 05:33:13 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <string>
#include "Zombie.hpp"

class ZombieEvent
{
public:
	ZombieEvent();
	static void		setZombieType(std::string type);
	static Zombie*	newZombie(std::string name);
	static Zombie*	randomChump();
private:
	static std::string	randomName();
	static std::string	m_zombieType;
	static bool			seeded;
};
