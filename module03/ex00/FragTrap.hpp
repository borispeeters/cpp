/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/02 22:58:36 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/17 10:46:31 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>

class FragTrap
{
public:
	FragTrap();
	FragTrap(const FragTrap &ft);
	FragTrap(const std::string &name);
	~FragTrap();
	FragTrap&	operator=(const FragTrap &ft);
	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		vaulthunter_dot_exe(std::string const & target);
private:
	void		funZerker(std::string const & target);
	void		laserInferno(std::string const & target);
	void		oneShotWonder(std::string const & target);
	void		torgueFiesta(std::string const & target);
	void		clapInTheBox(std::string const & target);
	int	m_hitPoints;
	int	m_maxHitPoints;
	int	m_energyPoints;
	int	m_maxEnergyPoints;
	int	m_level;
	const std::string	m_name;
	int	m_meleeDamage;
	int	m_rangedDamage;
	unsigned int	m_armorReduction;
};

#endif
