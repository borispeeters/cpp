/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/11 17:00:50 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/07/29 11:51:42 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <deque>
#include <iostream>
#include <list>
#include <set>
#include <vector>

void	test_list()
{
	std::list<int>	li;
	std::list<int>::iterator	it;

	for (int i = 1; i <= 5; ++i)
		li.push_back(i);

	for (int i = 4; i <= 7; ++i)
	{
		try
		{
			it = easyfind(li, i);
			std::cout << "found " << i << '\n';
		}
		catch(const std::exception& e)
		{
			std::cout << "the number " << i << " couldn't be found\n";
		}
	}
}

void	test_vector()
{
	std::vector<int>	vc;
	std::vector<int>::iterator	it;

	for (int i = 1; i <= 5; ++i)
		vc.push_back(i);

	for (int i = 4; i <= 7; ++i)
	{
		try
		{
			it = easyfind(vc, i);
			std::cout << "found " << i << '\n';
		}
		catch(const std::exception& e)
		{
			std::cout << "the number " << i << " couldn't be found\n";
		}
	}
}

void	test_deque()
{
	std::deque<int>	de;
	std::deque<int>::iterator	it;

	for (int i = 1; i <= 5; ++i)
		de.push_back(i);

	for (int i = 4; i <= 7; ++i)
	{
		try
		{
			it = easyfind(de, i);
			std::cout << "found " << i << '\n';
		}
		catch(const std::exception& e)
		{
			std::cout << "the number " << i << " couldn't be found\n";
		}
	}
}

void	test_set()
{
	std::set<int>	s;
	std::set<int>::iterator	it;

	for (int i = 1; i <= 5; ++i)
		s.insert(i);

	for (int i = 4; i <= 7; ++i)
	{
		try
		{
			it = easyfind(s, i);
			std::cout << "found " << i << '\n';
		}
		catch(const std::exception& e)
		{
			std::cout << "the number " << i << " couldn't be found\n";
		}
	}
}

int		main()
{
	test_list();
	test_vector();
	test_deque();
	test_set();
	return 0;
}
