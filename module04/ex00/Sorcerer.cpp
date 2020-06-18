/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/17 08:08:35 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/18 17:53:11 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Sorcerer.hpp"

Sorcerer::Sorcerer(const std::string &name, const std::string &title):
	m_name(name),
	m_title(title)
{
	std::cout << m_name << ", " << m_title << ", is born!\n";
}

Sorcerer::Sorcerer(const Sorcerer &sorc):
	m_name(sorc.m_name),
	m_title(sorc.m_title)
{
	std::cout << m_name << ", " << m_title << ", is born!\n";
}

Sorcerer::~Sorcerer()
{
	std::cout << m_name << ", " << m_title << ", is dead. Consequences will never be the same!\n";
}

Sorcerer&	Sorcerer::operator=(const Sorcerer &sorc)
{
	if (&sorc != this)
	{
		m_name = sorc.m_name;
		m_title = sorc.m_title;
	}
	return *this;
}

std::string	Sorcerer::getName() const
{
	return m_name;
}

std::string	Sorcerer::getTitle() const
{
	return m_title;
}

void		Sorcerer::polymorph(Victim const & victim)
{
	victim.getPolymorphed();
}

std::ostream&	operator<<(std::ostream & out, const Sorcerer & sorc)
{
    out << "I am " << sorc.getName() << ", " << sorc.getTitle() << ", and I like ponies!\n";
    return out;
}
