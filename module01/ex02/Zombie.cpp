/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/31 18:13:11 by bpeeters       #+#    #+#                */
/*   Updated: 2020/04/01 05:34:11 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : m_name(name), m_type(type)
{
}

void	Zombie::announce()
{
	std::cout << '<' << m_name << " (" << m_type << ")> Braiiiiiinnnssss...\n";
}
