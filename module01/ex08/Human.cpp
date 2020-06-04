/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/01 04:32:04 by bpeeters       #+#    #+#                */
/*   Updated: 2020/04/03 04:37:54 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Human.hpp"

void	Human::meleeAttack(std::string const & target)
{
	std::cout << target << " attacks with his fist!\n";
}

void	Human::rangedAttack(std::string const & target)
{
	std::cout << target << " shoots with his gun!\n";
}

void	Human::intimidatingShout(std::string const & target)
{
	std::cout << target << " shouts \"begone you lousy jobbernowl\", scaring his enemies off.\n";
}

void	Human::action(std::string const & action_name, std::string const & target)
{
	typedef void(Human::*humanFnPtr)(std::string const & target);
	humanFnPtr attackFunctions[] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
	if (action_name == "meleeAttack")
		(this->*attackFunctions[0])(target);
	else if (action_name == "rangedAttack")
		(this->*attackFunctions[1])(target);
	else if (action_name == "intimidatingShout")
		(this->*attackFunctions[2])(target);
}
