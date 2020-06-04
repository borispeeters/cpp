/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/01 00:31:07 by bpeeters       #+#    #+#                */
/*   Updated: 2020/04/01 05:37:22 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, const Weapon &weapon) : m_name(name), m_weapon(weapon)
{
}

void	HumanA::attack() const
{
	std::cout << m_name << " attacks with his " << m_weapon.getType() << std::endl;
}
