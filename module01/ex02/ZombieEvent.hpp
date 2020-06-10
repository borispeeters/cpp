/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/31 17:47:29 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/10 12:10:25 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <string>
#include "Zombie.hpp"

class ZombieEvent
{
public:
	ZombieEvent();
	void		setZombieType(std::string type);
	std::string	getZombieType();
	Zombie*		newZombie(std::string name);
	Zombie*		randomChump();
private:
	std::string	randomName();
	std::string	m_zombieType;
};
