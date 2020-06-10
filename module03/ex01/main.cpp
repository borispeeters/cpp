/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/02 22:58:34 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/10 17:03:46 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	FragTrap	ft("Fraggie");
	FragTrap	*ft2 = new FragTrap(ft);
	ScavTrap	st("Scavvy");
	ScavTrap	st2(st);

	ft.takeDamage(4);
	ft.rangedAttack("Corona");
	ft.takeDamage(80);
	ft.takeDamage(50);
	ft.beRepaired(90);
	ft.meleeAttack("Corona");
	ft.takeDamage(10);
	ft.beRepaired(50);
	ft.vaulthunter_dot_exe("Corona");
	ft.vaulthunter_dot_exe("Corona");
	ft2->vaulthunter_dot_exe("Someone");
	ft.vaulthunter_dot_exe("Corona");
	ft.vaulthunter_dot_exe("Corona");
	ft2->vaulthunter_dot_exe("Someone");
	delete ft2;
	ft.vaulthunter_dot_exe("Corona");
	st.challengeNewcomer("Trump");
	st2.rangedAttack("Trump");
	return 0;
}
