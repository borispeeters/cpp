/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/31 01:39:53 by bpeeters       #+#    #+#                */
/*   Updated: 2020/04/01 05:34:23 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
public:
	Zombie(std::string name, std::string type);
	void	announce();
private:
	std::string	m_name;
	std::string	m_type;
};

#endif
