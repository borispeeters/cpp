/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/31 23:52:11 by bpeeters       #+#    #+#                */
/*   Updated: 2020/04/01 05:37:30 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include "Weapon.hpp"

class HumanA
{
public:
	HumanA(const std::string &name, const Weapon &weapon);
	void	attack() const;
private:
	std::string		m_name;
	const Weapon&	m_weapon;
};

#endif
