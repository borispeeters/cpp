/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/12 16:01:05 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/15 09:28:33 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage):
    m_name(name),
    m_apcost(apcost),
    m_damage(damage)
{
}

AWeapon::~AWeapon()
{
}

AWeapon::AWeapon(AWeapon const & aweapon):
	m_name(aweapon.m_name),
	m_apcost(aweapon.m_apcost),
	m_damage(aweapon.m_damage)
{
}

AWeapon&	AWeapon::operator=(const AWeapon &aweapon)
{
	if (&aweapon != this)
	{
		m_name = aweapon.m_name;
		m_apcost = aweapon.m_apcost;
		m_damage = aweapon.m_damage;
	}
	return *this;
}

std::string const& AWeapon::getName() const
{
	return m_name;
}

int AWeapon::getAPCost() const
{
	return m_apcost;
}

int AWeapon::getDamage() const
{
	return m_damage;
}
