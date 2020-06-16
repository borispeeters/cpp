/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/15 14:47:04 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/16 16:21:45 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!\n";
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh...\n";
}

TacticalMarine::TacticalMarine(TacticalMarine const & tact)
{
	(void)tact; //lol
	std::cout << "Tactical Marine ready for battle!\n";
}

TacticalMarine&	TacticalMarine::operator=(TacticalMarine const & tact)
{
	(void)tact; //lol
	return *this;
}

ISpaceMarine*	TacticalMarine::clone() const
{
	TacticalMarine	*ret = new (std::nothrow) TacticalMarine(*this);
	if (!ret)
	{
		std::cerr << "Failed to clone TacticalMarine\n";
		return NULL;
	}
	return ret;
}

void	TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!\n";
}

void	TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *\n";
}

void	TacticalMarine::meleeAttack() const
{
	std::cout <<  "* attacks with a chainsword *\n";
}
