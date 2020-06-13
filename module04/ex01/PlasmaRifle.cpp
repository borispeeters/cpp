/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/13 10:40:45 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/13 16:29:31 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle():
	AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::~PlasmaRifle()
{
}

// PlasmaRifle::PlasmaRifle(PlasmaRifle const & plasmarifle)
// {
// 	as;
// }

// PlasmaRifle&	PlasmaRifle::operator=(const PlasmaRifle & plasmarifle)
// {
// 	if (&plasmarifle == this)
// 		return *this;
// 	m_name = plasmarifle.m_name;
// 	m_apcost = plasmarifle.m_apcost;
// 	m_damage = plasmarifle.m_damage;
// }

void	PlasmaRifle::attack()
{
	std::cout << "* piouuu piouuu piouuu *\n";
}
