/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/11 01:26:55 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/04/17 07:34:27 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap
{
public:
	SuperTrap();
	SuperTrap(const std::string &name);
	SuperTrap(const SuperTrap &ft);
	virtual ~SuperTrap();
	SuperTrap&		operator=(const SuperTrap &st);
	virtual void	rangedAttack(std::string const & target);
	virtual void	meleeAttack(std::string const & target);
};

#endif
