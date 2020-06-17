/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/03 07:33:53 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/17 10:50:53 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap("???")
{
	std::cout << "We are the ninjatraps and we are legion! Viva la Robolution!\n";
	m_hitPoints = 60;
	m_maxHitPoints = 60;
	m_energyPoints = 120;
	m_maxEnergyPoints = 120;
	m_level = 1;
	m_meleeDamage = 60;
	m_rangedDamage = 5;
	m_armorReduction = 0;
}

NinjaTrap::NinjaTrap(const NinjaTrap &nt) : ClapTrap(nt.m_name)
{
	std::cout << "We are the ninjatraps and we are legion! Viva la Robolution!\n";
	*this = nt;
}

NinjaTrap::NinjaTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "We are the ninjatraps and we are legion! Viva la Robolution!\n";
	m_hitPoints = 60;
	m_maxHitPoints = 60;
	m_energyPoints = 120;
	m_maxEnergyPoints = 120;
	m_level = 1;
	m_meleeDamage = 60;
	m_rangedDamage = 5;
	m_armorReduction = 0;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "A ninjatrap feels no pain- ow! Quit it!\n";
}

NinjaTrap&	NinjaTrap::operator=(const NinjaTrap &nt)
{
	m_hitPoints = nt.m_hitPoints;
	m_maxHitPoints = nt.m_maxHitPoints;
	m_energyPoints = nt.m_energyPoints;
	m_maxEnergyPoints = nt.m_maxEnergyPoints;
	m_level = nt.m_level;
	m_meleeDamage = nt.m_meleeDamage;
	m_rangedDamage = nt.m_rangedDamage;
	m_armorReduction = nt.m_armorReduction;
	return *this;
}

void	NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout << "NINJ4-TP " << m_name << " attacks " << target << " at range, causing "
	<< m_rangedDamage << " points of damage!" << std::endl;
}

void	NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << "NINJ4-TP " << m_name << " hits " << target << " from up close, causing "
	<< m_meleeDamage << " points of damage!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(const FragTrap &ft)
{
	std::cout << "NINJ4-TP " << m_name << " is supported from range by the fragtrap and together they deal "
	<< m_meleeDamage + ft.getRangedDamage() << " damage!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(const NinjaTrap &nt)
{
	std::cout << "NINJ4-TP " << m_name << " and NINJ4-TP " << nt.m_name << " combine their attack power to deal "
	<< (m_meleeDamage + nt.m_meleeDamage) * 2 / 3 << " damage!" << std::endl;

}

void	NinjaTrap::ninjaShoebox(const ScavTrap &st)
{
	(void)st;
	std::cout << "NINJ4-TP " << m_name << " tries working with the SC4V-TP but realizes it's completely useless!" << std::endl;
}
