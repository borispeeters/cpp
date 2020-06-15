/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/13 16:26:41 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/15 11:27:10 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PowerFist.hpp"

PowerFist::PowerFist():
    AWeapon("Power Fist", 8, 50)
{
}

PowerFist::~PowerFist()
{
}

PowerFist::PowerFist(PowerFist const & powerfist):
    AWeapon(powerfist)
{
}

PowerFist&	PowerFist::operator=(const PowerFist & powerfist)
{
	if (&powerfist != this)
	{
		m_name = powerfist.m_name;
		m_apcost = powerfist.m_apcost;
		m_damage = powerfist.m_damage;
	}
	return *this;
}

void    PowerFist::attack() const
{
    std::cout << "* pschhh...SBAM! *\n";
}
