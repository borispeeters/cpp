/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/11 19:09:12 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/15 11:41:26 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Peon.hpp"

Peon::Peon(const std::string &name):
    Victim(name)
{
    std::cout << "Zog zog.\n";
}

Peon::Peon(const Peon &peon):
    Victim(peon)
{
    std::cout << "Zog zog.\n";
}

Peon::~Peon()
{
    std::cout << "Bleuark...\n";
}

Peon&   Peon::operator=(const Peon &peon)
{
    if (&peon != this)
    {
		m_name = peon.m_name;
	}
    return *this;
}

void    Peon::getPolymorphed() const
{
    std::cout << m_name << " has been turned into a pink pony!\n";
}
