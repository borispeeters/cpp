/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/31 23:40:55 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/10 16:10:04 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
public:
	Weapon(const std::string &type);
	const std::string&	getType() const;
	void				setType(const std::string &type);
private:
	std::string	m_type;
};

#endif
