/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/13 18:26:20 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/15 09:27:53 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "SuperMutant.hpp"

SuperMutant::SuperMutant():
    Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!\n";
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh...\n";
}

SuperMutant::SuperMutant(SuperMutant const &  supermutant):
    Enemy(supermutant)
{
}

SuperMutant&    SuperMutant::operator=(const SuperMutant & supermutant)
{
    if (&supermutant != this)
    {
        m_hp = supermutant.m_hp;
        m_type = supermutant.m_type;
    }
    return *this;
}

void    SuperMutant::takeDamage(int damage)
{
    Enemy::takeDamage(damage - 3);
}
