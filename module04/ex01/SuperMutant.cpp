/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/13 18:26:20 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/13 18:30:56 by bpeeters      ########   odam.nl         */
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

void    SuperMutant::takeDamage(int damage)
{
    damage -= 3;
    Enemy::takeDamage(damage);
}
