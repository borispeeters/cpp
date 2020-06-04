/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/03 07:29:56 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/04/11 01:30:19 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
public:
	NinjaTrap();
	NinjaTrap(const std::string &name);
	NinjaTrap(const NinjaTrap &nt);
	virtual ~NinjaTrap();
	NinjaTrap&		operator=(const NinjaTrap &nt);
	virtual void	rangedAttack(std::string const & target);
	virtual void	meleeAttack(std::string const & target);
	void			ninjaShoebox(const FragTrap &ft);
	void			ninjaShoebox(const NinjaTrap &nt);
	void			ninjaShoebox(const ScavTrap &st);
private:
};

#endif
