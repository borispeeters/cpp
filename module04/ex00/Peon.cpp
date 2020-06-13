/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/11 19:09:12 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/12 14:10:53 by bpeeters      ########   odam.nl         */
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
    *this = peon;
    std::cout << "Zog zog.\n";
}

Peon::~Peon()
{
    std::cout << "Bleuark...\n";
}

Peon&   Peon::operator=(const Peon &peon)
{
    if (&peon == this)
        return *this;
    Victim::operator=(peon);
    return *this;
}

void    Peon::getPolymorphed() const
{
    std::cout << m_name << " has been turned into a pink pony!\n";
}
