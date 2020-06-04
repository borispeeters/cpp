/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/03 05:26:57 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/04 17:29:22 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include <string>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("???")

{
	std::cout << "Guarding gates is FUN!\n";
	m_hitPoints = 100;
	m_maxHitPoints = 100;
	m_energyPoints = 50;
	m_maxEnergyPoints = 50;
	m_level = 1;
	m_meleeDamage = 20;
	m_rangedDamage = 15;
	m_armorReduction = 3;
}

ScavTrap::ScavTrap(const ScavTrap &st) : ClapTrap(st.m_name)
{
	std::cout << "Guarding gates is FUN!\n";
	*this = st;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "Guarding gates is FUN!\n";
	m_hitPoints = 100;
	m_maxHitPoints = 100;
	m_energyPoints = 50;
	m_maxEnergyPoints = 50;
	m_level = 1;
	m_meleeDamage = 20;
	m_rangedDamage = 15;
	m_armorReduction = 3;
}
ScavTrap::~ScavTrap()
{
	std::cout << "A noble-yet-dangerous robot, alone, mysterious, desperate to be loved...\n";
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &st)
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
