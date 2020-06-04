/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/02 22:58:36 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/04/11 00:10:33 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &ft);
	virtual ~FragTrap();
	FragTrap&		operator=(const FragTrap &ft);
	virtual void	rangedAttack(std::string const & target);
	virtual void	meleeAttack(std::string const & target);
	void			vaulthunter_dot_exe(std::string const & target);
private:
	void	funZerker(std::string const & target);
	void	laserInferno(std::string const & target);
	void	oneShotWonder(std::string const & target);
	void	torgueFiesta(std::string const & target);
	void	clapInTheBox(std::string const & target);
};

#endif
