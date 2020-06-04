/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/03 05:26:57 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/04 17:28:28 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include <string>
#include "ScavTrap.hpp"

static void	generateSeed()
{
	static bool	generated(false);

	if (!generated)
	{
		std::srand(static_cast<unsigned int>(std::time(0)));
		generated = true;
	}
}

ScavTrap::ScavTrap():
	m_hitPoints(100),
	m_maxHitPoints(100),
	m_energyPoints(50),
	m_maxEnergyPoints(50),
	m_level(1),
	m_name("???"),
	m_meleeDamage(20),
	m_rangedDamage(15),
	m_armorReduction(3)
{
	std::cout << "Guarding gates is FUN!\n";
	generateSeed();
}

ScavTrap::ScavTrap(const ScavTrap &ft) : m_name(ft.m_name)
{
	std::cout << "Guarding gates is FUN!\n";
	*this = ft;
}

ScavTrap::ScavTrap(const std::string &name):
	m_hitPoints(100),
	m_maxHitPoints(100),
	m_energyPoints(50),
	m_maxEnergyPoints(50),
	m_level(1),
	m_name(name),
	m_meleeDamage(20),
	m_rangedDamage(15),
	m_armorReduction(3)
{
	std::cout << "Guarding gates is FUN!\n";
	generateSeed();
}
ScavTrap::~ScavTrap()
{
	std::cout << "A noble-yet-dangerous robot, alone, mysterious, desperate to be loved...\n";
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &ft)
{
	m_hitPoints = ft.m_hitPoints;
	m_maxHitPoints = ft.m_maxHitPoints;
	m_energyPoints = ft.m_energyPoints;
	m_maxEnergyPoints = ft.m_maxEnergyPoints;
	m_level = ft.m_level;
	m_meleeDamage = ft.m_meleeDamage;
	m_rangedDamage = ft.m_rangedDamage;
	m_armorReduction = ft.m_armorReduction;
	return *this;
}

void		ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << m_name << " attacks " << target << " at range, causing "
	<< m_rangedDamage << " points of damage!" << std::endl;
}

void		ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << m_name << " hits " << target << " from up close, causing "
	<< m_meleeDamage << " points of damage!" << std::endl;
}

void		ScavTrap::takeDamage(unsigned int amount)
{
	if (amount > m_armorReduction)
	{
		amount -= m_armorReduction;
		std::cout << "SC4V-TP " << m_name << " is hit and takes " << amount << " points of damage!" << std::endl;
		m_hitPoints -= amount;
		if (m_hitPoints < 0)
			m_hitPoints = 0;
	}
	else
		std::cout << "SC4V-TP " << m_name << " is hit, but is protected by their armor." << std::endl;
	
	std::cout << "SC4V-TP " << m_name << " has " << m_hitPoints << " hit points left now." << std::endl; 
}

void		ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "SC4V-TP " << m_name << " is repaired and regains " << amount << " hit points!" << std::endl;
	m_hitPoints += amount;
	if (m_hitPoints > m_maxHitPoints)
		m_hitPoints = m_maxHitPoints;
	std::cout << "SC4V-TP " << m_name << " has " << m_hitPoints << " hit points left now." << std::endl;
}

void		ScavTrap::challengeNewcomer(std::string const & target)
{
	const std::string	challenge[] = {
	"Lick your elbow",
	"Defeat corona",
	"Say backwards backwards",
	"Dress up as yourself",
	"Live a fulfilling life and achieve everything you set out to do"
	};	
	const int			arrayLength = sizeof(challenge) / sizeof(challenge[0]);
	static const double fraction = 1.0 / (RAND_MAX + 1.0);
	int	randomIndex = static_cast<int>(arrayLength * (std::rand() * fraction));

	std::cout << "SC4V-TP " << m_name << " tells " << target << " he will let him in if he completes the following challenge:\n";
	std::cout << "- \"" << challenge[randomIndex] << '\"' << std::endl;
}
