/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/01 04:32:04 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/07/27 08:46:51 by bpeeters      ########   odam.nl         */
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
	humanFnPtr 	attackFunctions[] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
	std::string	attackNames[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};

	for (int i = 0; i < 3; ++i)
	{
		if (attackNames[i] == action_name)
			(this->*attackFunctions[i])(target);
	}
}
