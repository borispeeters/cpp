/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/31 22:14:08 by bpeeters       #+#    #+#                */
/*   Updated: 2020/04/01 05:35:45 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
public:
	Zombie(std::string name = "", std::string type = "");
	void	announce();
	void	setName(const std::string &name);
	void	setType(const std::string &type);
private:
	std::string	m_name;
	std::string	m_type;
};

#endif
