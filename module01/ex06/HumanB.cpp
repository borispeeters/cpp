/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/01 00:35:39 by bpeeters       #+#    #+#                */
/*   Updated: 2020/04/01 05:37:56 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : m_name(name), m_weapon(0)
{
}

void	HumanB::attack() const
{
	std::cout << m_name << " attacks with his " << m_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(const Weapon& weapon)
{
	m_weapon = &weapon;
}
