/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/31 00:24:26 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/04 15:55:43 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony() : m_pets(0)
{
	std::cout << "Constructor called\n";
}

Pony::~Pony()
{
	std::cout << "Destructor called\n";
}

void	Pony::feed() const
{
	std::cout << "You feed the pony. The pony is satisfied.\n";
}

void	Pony::ride() const
{
	std::cout << "You ride the pony. The pony is now a little bit tired.\n";
}

void	Pony::pet()
{
	++m_pets;
	std::cout << "You pet the pony. You have now petted the pony a total number of " << m_pets << " times.\n";
}
