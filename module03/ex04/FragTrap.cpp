/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/02 22:58:39 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/04/11 01:24:00 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include <string>
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("???")
{
	std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!\n";
	m_hitPoints = 100;
	m_maxHitPoints = 100;
	m_energyPoints = 100;
	m_maxEnergyPoints = 100;
	m_level = 1;
	m_meleeDamage = 30;
	m_rangedDamage = 20;
	m_armorReduction = 5;
}

FragTrap::FragTrap(const FragTrap &ft) : ClapTrap(ft.m_name)
{
	std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!\n";
	*this = ft;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!\n";
	m_hitPoints = 100;
	m_maxHitPoints = 100;
	m_energyPoints = 100;
	m_maxEnergyPoints = 100;
	m_level = 1;
	m_meleeDamage = 30;
	m_rangedDamage = 20;
	m_armorReduction = 5;
}

FragTrap::~FragTrap()
{
	std::cout << "Argh arghargh death gurgle gurglegurgle urgh... death.\n";
}

FragTrap&	FragTrap::operator=(const FragTrap &ft)
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

int			FragTrap::getRangedDamage() const
{
	return m_rangedDamage;
}

void		FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << m_name << " attacks " << target << " at range, causing "
	<< m_rangedDamage << " points of damage!" << std::endl;
}

void		FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << m_name << " hits " << target << " from up close, causing "
	<< m_meleeDamage << " points of damage!" << std::endl;
}

void		FragTrap::funZerker(std::string const & target)
{
	std::cout << "FR4G-TP " << m_name << " receives a copy of his weapon in his other clamp and starts automatically firing them, dealing 35 damage to " << target << '!' << std::endl;
}

void		FragTrap::laserInferno(std::string const & target)
{
	std::cout << "FR4G-TP " << m_name << " summons a disco ball above his head that shoots lasers at " << target << ", inflicting 40 points of damage!" << std::endl;
}

void		FragTrap::oneShotWonder(std::string const & target)
{
	std::cout << "FR4G-TP " << m_name << " unloads all his ammo in one shot, hitting " << target << " for 45 points of damage!" << std::endl;
}

void		FragTrap::torgueFiesta(std::string const & target)
{
	std::cout << "FR4G-TP " << m_name << " emits a series of grenades aimed at " << target << ", dealing 50 points of damage!" << std::endl;
}

void		FragTrap::clapInTheBox(std::string const & target)
{
	std::cout << "FR4G-TP " << m_name << " digistructs a large bomb that explodes after a short delay, dealing 75 points of damage to " << target << '!' << std::endl;
}

void		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	typedef void(FragTrap::*FunctionPointer)(std::string const & target);
	FunctionPointer attackFunctions[] = {&FragTrap::funZerker, &FragTrap::laserInferno,
	&FragTrap::oneShotWonder, &FragTrap::torgueFiesta, &FragTrap::clapInTheBox};
	
	if (m_energyPoints >= 25)
	{
		m_energyPoints -= 25;
		if (m_energyPoints < 0)
			m_energyPoints = 0;

		const int	arrayLength = sizeof(attackFunctions) / sizeof(attackFunctions[0]);
		static const double fraction = 1.0 / (RAND_MAX + 1.0);
		int	randomIndex = static_cast<int>(arrayLength * (std::rand() * fraction));
		(this->*attackFunctions[randomIndex])(target);
	}
	else
	{
		std::cout << "FR4G-TP " << m_name << " only has " << m_energyPoints <<
		" energy points left, whereas 25 energy points are required to use this attack." << std::endl;
	}
}
