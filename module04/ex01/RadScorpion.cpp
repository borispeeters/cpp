/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/13 18:33:44 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/15 09:47:33 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "RadScorpion.hpp"

RadScorpion::RadScorpion():
    Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *\n";
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *\n";
}

RadScorpion::RadScorpion(RadScorpion const & radscorpion):
    Enemy(radscorpion)
{
}

RadScorpion&    RadScorpion::operator=(const RadScorpion & radscorpion)
{
    if (&radscorpion != this)
    {
		m_hp = radscorpion.m_hp;
		m_type = radscorpion.m_type;
    }
    return *this;
}
