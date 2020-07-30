/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 21:25:33 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/07/30 20:12:58 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <deque>
#include <iostream>
#include <list>
#include <stack>
#include <string>
#include <vector>

void	test_deque()
{
	MutantStack<int, std::deque<int> > dstack;

	if (dstack.empty())
		std::cout << "Underlying container is empty\n";
	dstack.push(5);
	dstack.push(17);
	std::cout << dstack.top() << '\n';
	dstack.pop();
	std::cout << dstack.size() << '\n';
	std::cout << '\n';
	dstack.push(3);
	dstack.push(5);
	dstack.push(737);
	dstack.push(42);
	dstack.push(8);
	dstack.push(89);
	dstack.push(0);
	MutantStack<int, std::deque<int> >::iterator it = dstack.begin();
	MutantStack<int, std::deque<int> >::iterator ite = dstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << '\n';
		++it;
	}
	std::stack<int, std::deque<int> > d(dstack);
}

void	test_list()
{
	MutantStack<int, std::list<int> > lstack;

	for (int i = 42; i < 50; ++i)
		lstack.push(i);
	std::cout << lstack.size() << '\n';

	MutantStack<int, std::list<int> > truelstack;

	lstack.swap(truelstack);

	MutantStack<int, std::list<int> >::reverse_iterator it = truelstack.rbegin();
	MutantStack<int, std::list<int> >::reverse_iterator ite = truelstack.rend();

	std::cout << '\n';
	while (it != ite)
	{
		std::cout << *it << '\n';
		++it;
	}
	lstack = truelstack;
	lstack.pop();
	std::cout << '\n' << lstack.top() << '\n';
}

void	test_vector()
{
	MutantStack<std::string, std::vector<std::string> > vstack;

	vstack.push("aan");
	vstack.push("die");
	vstack.push("Amsterdamse");
	vstack.push("grachten");

	MutantStack<std::string, std::vector<std::string> >::reverse_iterator it = vstack.rend() - 1;
	MutantStack<std::string, std::vector<std::string> >::reverse_iterator ite = vstack.rbegin() - 1;

	while (it != ite)
	{
		std::cout << *it << ' ';
		--it;
	}
	std::cout << '\n';
}

int 	main()
{
	std::cout << "DEQUE" << std::endl;
	test_deque();
	std::cout << std::endl << "LIST" << std::endl;
	test_list();
	std::cout << std::endl << "VECTOR" << std::endl;
	test_vector();

	return 0;
}
