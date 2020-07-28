/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/11 17:00:50 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/07/28 14:50:02 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <list>

int	main()
{
	std::list<int>	li;
	std::list<int>::iterator	it;

	for (int i = 1; i <= 5; ++i)
		li.push_back(i);

	try
	{
		std::cout << "1: ";
		it = easyfind(li, 1);
		std::cout << *it << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << "the number couldn't be found." << '\n';
	}
	try
	{
		std::cout << "42: ";
		it = easyfind(li, 42);
		std::cout << *it << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << "the number couldn't be found." << '\n';
	}
	
	return 0;
}
