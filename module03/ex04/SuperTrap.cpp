/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/11 01:26:58 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/10 17:17:18 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "SuperTrap.hpp"

SuperTrap::SuperTrap():
	ClapTrap(),
	FragTrap(),
	NinjaTrap()
{
	std::cout << "SUPER CONSTRUCTOR\n";
	m_hitPoints = FragTrap::m_hitPoints;
	m_maxHitPoints = FragTrap::m_maxHitPoints;
	m_energyPoints = NinjaTrap::m_energyPoints;
	m_maxEnergyPoints = NinjaTrap::m_maxEnergyPoints;
	m_level = 1;
	m_meleeDamage = NinjaTrap::m_meleeDamage;
	m_rangedDamage = FragTrap::m_rangedDamage;
	m_armorReduction = FragTrap::m_armorReduction;
}

SuperTrap::SuperTrap(const std::string &name):
	ClapTrap(name),
	FragTrap(name),
	NinjaTrap(name)
{
	std::cout << "SUPER CONSTRUCTOR WITH NAME\n";
	m_hitPoints = FragTrap::m_hitPoints;
	m_maxHitPoints = FragTrap::m_maxHitPoints;
	m_energyPoints = NinjaTrap::m_energyPoints;
	m_maxEnergyPoints = NinjaTrap::m_maxEnergyPoints;
	m_level = 1;
	m_meleeDamage = NinjaTrap::m_meleeDamage;
	m_rangedDamage = FragTrap::m_rangedDamage;
	m_armorReduction = FragTrap::m_armorReduction;
}

SuperTrap::SuperTrap(const SuperTrap &st):
	ClapTrap(st.m_name),
	FragTrap(st.m_name),
	NinjaTrap(st.m_name)

{
	std::cout << "SUPER COPY CONSTRUCTOR\n";
	*this = st;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SUPER DESTRUCTOR\n";
}

SuperTrap&		SuperTrap::operator=(const SuperTrap &st)
{
	m_hitPoints = st.m_hitPoints;
	m_maxHitPoints = st.m_maxHitPoints;
	m_energyPoints = st.m_energyPoints;
	m_maxEnergyPoints = st.m_maxEnergyPoints;
	m_level = st.m_level;
	m_meleeDamage = st.m_meleeDamage;
	m_rangedDamage = st.m_rangedDamage;
	m_armorReduction = st.m_armorReduction;
	return *this;
}

void	SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}
