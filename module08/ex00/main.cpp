/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/11 17:00:50 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/07/24 20:39:49 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <exception>
#include <list>



#include <iostream>


template <typename T>
typename T::iterator	easyfind(T & haystack, int needle)
{
	typename T::iterator	it;

	it = std::find(haystack.begin(), haystack.end(), needle);

	if (it == haystack.end())
		throw std::exception();
	return it;
}

int	main()
{
	std::list<int>	li;
	std::list<int>::iterator	it;

	for (int i = 42; i < 42 * 42; i *= 2)
		li.push_back(i);

	try
	{
		it = easyfind(li, 41);
		std::cout << *it << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << "The number couldn't be found." << '\n';
	}
	try
	{
		it = easyfind(li, 42);
		std::cout << *it << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << "The number couldn't be found." << '\n';
	}
	
	return 0;
}