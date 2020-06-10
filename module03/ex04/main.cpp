/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/02 22:58:34 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/10 17:15:00 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ScavTrap.hpp"
#include "SuperTrap.hpp"

int	main()
{
	SuperTrap	super("SuperRobot");
	SuperTrap	super2( super );
	NinjaTrap	ninja("Harry");

	super.vaulthunter_dot_exe("Corona");
	super2.ninjaShoebox( ninja );
	return 0;
}
