/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/31 00:58:51 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/04/08 01:02:30 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void	ponyOnTheStack()
{
	Pony	pony;

	pony.feed();
	pony.ride();
	pony.pet();
	pony.pet();
	pony.pet();
}

void	ponyOnTheHeap()
{
	Pony	*pony = new Pony;

	pony->feed();
	pony->ride();
	pony->pet();
	pony->pet();
	pony->pet();
	delete pony;
}

int	main()
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return 0;
}
