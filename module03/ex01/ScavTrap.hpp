/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/03 05:26:30 by bpeeters       #+#    #+#                */
/*   Updated: 2020/04/03 06:00:58 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>

class ScavTrap
{
public:
	ScavTrap();
	ScavTrap(const ScavTrap &ft);
	ScavTrap(const std::string &name);
	~ScavTrap();
	ScavTrap&	operator=(const ScavTrap &ft);
	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		challengeNewcomer(std::string const & target);
private:
	int	m_hitPoints;
	int	m_maxHitPoints;
	int	m_energyPoints;
	int	m_maxEnergyPoints;
	int	m_level;
	const std::string	m_name;
	int	m_meleeDamage;
	int	m_rangedDamage;
	int	m_armorReduction;
};

#endif
