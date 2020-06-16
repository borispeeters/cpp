/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.cpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/15 17:52:22 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/16 16:21:18 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *\n";
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I'll be  back...\n";
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & term)
{
	(void)term; //lol
	std::cout << "* teleports from space *\n";
}

AssaultTerminator&	AssaultTerminator::operator=(AssaultTerminator const & term)
{
	(void)term; //lol
	return *this;
}

ISpaceMarine*	AssaultTerminator::clone() const
{
	AssaultTerminator	*ret = new (std::nothrow) AssaultTerminator(*this);
	if (!ret)
	{
		std::cerr << "Failed to clone AssaultTerminator\n";
		return NULL;
	}
	return ret;
}

void	AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!\n";
}

void	AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *\n";
}

void	AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *\n";
}
