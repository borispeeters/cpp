/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/01 05:12:51 by bpeeters       #+#    #+#                */
/*   Updated: 2020/04/01 05:17:31 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int	main()
{
	Human human;

	human.action("meleeAttack", "Bob");
	human.action("intimidatingShout", "Mark Rutte");
	human.action("rangedAttack", "James Bond");
	return 0;
}