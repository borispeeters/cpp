/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/01 00:32:22 by bpeeters       #+#    #+#                */
/*   Updated: 2020/04/01 05:38:05 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include "Weapon.hpp"

class HumanB
{
public:
	HumanB(const std::string &name);
	void	attack() const;
	void	setWeapon(const Weapon& weapon);
private:
	std::string		m_name;
	const Weapon	*m_weapon;
};

#endif
