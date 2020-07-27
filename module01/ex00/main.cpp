/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/31 00:58:51 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/07/27 08:42:39 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void	ponyOnTheStack()
{
	std::cout << "START ON STACK\n";
	Pony	pony;

	pony.feed();
	pony.ride();
	pony.pet();
	pony.pet();
	pony.pet();
	std::cout << "END ON STACK\n";
}

void	ponyOnTheHeap()
{
	std::cout << "START ON HEAP\n";
	Pony	*pony = new Pony;

	pony->feed();
	pony->ride();
	pony->pet();
	pony->pet();
	pony->pet();
	delete pony;
	std::cout << "END ON HEAP\n";
}

int	main()
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return 0;
}
