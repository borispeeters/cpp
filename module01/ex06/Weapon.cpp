/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/31 23:50:21 by bpeeters       #+#    #+#                */
/*   Updated: 2020/04/01 05:38:29 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

Weapon::Weapon(const std::string &type = "fist") : m_type(type)
{
}

const std::string&	Weapon::getType() const
{
	return m_type;
}

void				Weapon::setType(const std::string &type)
{
	m_type = type;
}
