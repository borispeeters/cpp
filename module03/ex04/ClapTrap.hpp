/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/03 06:19:45 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/04/11 00:10:27 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(const std::string &name);
	ClapTrap(const ClapTrap &ft);
	virtual ~ClapTrap();
	ClapTrap&		operator=(const ClapTrap &ft);
	virtual void	rangedAttack(std::string const & target) = 0;
	virtual void	meleeAttack(std::string const & target) = 0;
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
protected:
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
