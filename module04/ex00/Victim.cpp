/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/17 08:27:29 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/04/17 08:38:14 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Victim.hpp"


Victim::Victim(const std::string &name):
	m_name(name)
{
	std::cout << "Some random victim called " << m_name << " just appeared!\n";
}

Victim::Victim(const Victim &victim)
{
	*this = victim;
	std::cout << "Some random victim called " << m_name << " just appeared!\n";
}
Victim::~Victim()
{
	std::cout << "Victim " << m_name << " just died for no apparent reason!\n";
}

Victim&	Victim::operator=(const Victim &victim)
{
	m_name = victim.m_name;
	return *this;
}

std::string	Victim::getName() const
{
	return m_name;
}

void 		Victim::getPolymorphed() const
{
	std::cout << m_name << " has been turned into a cute little sheep!\n";
}

std::ostream& operator<<(std::ostream &out, const Victim &victim)
{
	out << "I'm " << victim.getName() << " and I like otters!\n";
    return out;
}
