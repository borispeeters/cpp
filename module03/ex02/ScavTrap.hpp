/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/03 05:26:30 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/04/11 00:10:38 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &ft);
	virtual ~ScavTrap();
	ScavTrap&		operator=(const ScavTrap &ft);
	virtual void	rangedAttack(std::string const & target);
	virtual void	meleeAttack(std::string const & target);
	void			challengeNewcomer(std::string const & target);
};

#endif
