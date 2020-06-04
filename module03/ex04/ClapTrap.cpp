/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/03 06:20:42 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/04/11 00:05:24 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include "ClapTrap.hpp"

static void	generateSeed()
{
	static bool	generated(false);

	if (!generated)
	{
		std::srand(static_cast<unsigned int>(std::time(0)));
		generated = true;
	}
}

ClapTrap::ClapTrap() : m_name("???")
{
	std::cout << "Claptrap default constructor called\n";
	m_hitPoints = 100;
	m_maxHitPoints = 100;
	m_energyPoints = 100;
	m_maxEnergyPoints = 100;
	m_level = 1;
	m_meleeDamage = 30;
	m_rangedDamage = 20;
	m_armorReduction = 5;
	generateSeed();
}

ClapTrap::ClapTrap(const ClapTrap &ct) : m_name(ct.m_name)
{
	std::cout << "Claptrap copy constructor called\n";
	*this = ct;
}

ClapTrap::ClapTrap(const std::string &name) : m_name(name)
{
	std::cout << "Claptrap constructor called\n";
	m_hitPoints = 100;
	m_maxHitPoints = 100;
	m_energyPoints = 100;
	m_maxEnergyPoints = 100;
	m_level = 1;
	m_meleeDamage = 30;
	m_rangedDamage = 20;
	m_armorReduction = 5;
	generateSeed();
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap destructor called\n";
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &ct)
{
	m_hitPoints = ct.m_hitPoints;
	m_maxHitPoints = ct.m_maxHitPoints;
	m_energyPoints = ct.m_energyPoints;
	m_maxEnergyPoints = ct.m_maxEnergyPoints;
	m_level = ct.m_level;
	m_meleeDamage = ct.m_meleeDamage;
	m_rangedDamage = ct.m_rangedDamage;
	m_armorReduction = ct.m_armorReduction;
	return *this;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > m_armorReduction)
	{
		amount -= m_armorReduction;
		std::cout << m_name << " is hit and takes " << amount << " points of damage!" << std::endl;
		m_hitPoints -= amount;
		if (m_hitPoints < 0)
			m_hitPoints = 0;
	}
	else
		std::cout << m_name << " is hit, but is protected by their armor." << std::endl;
	
	std::cout << m_name << " has " << m_hitPoints << " hit points left now." << std::endl; 
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << m_name << " is repaired and regains " << amount << " hit points!" << std::endl;
	m_hitPoints += amount;
	if (m_hitPoints > m_maxHitPoints)
		m_hitPoints = m_maxHitPoints;
	std::cout << m_name << " has " << m_hitPoints << " hit points left now." << std::endl;
}
