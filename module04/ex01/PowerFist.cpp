/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/13 16:26:41 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/13 18:11:12 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PowerFist.hpp"

PowerFist::PowerFist():
    AWeapon("Power Fist", 8, 50)
{
}

void    PowerFist::attack()
{
    std::cout << "* pschhh...SBAM! *\n";
}
