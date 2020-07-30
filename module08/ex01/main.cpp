/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 14:00:00 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/07/29 18:51:37 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <ctime>
#include <iostream>
#include <vector>

int main()
{
	Span sp;

	try
	{
		sp.addNumber(42);
		std::cout << "You successfully added a number :D\n";
	}
	catch(const std::exception& e)
	{
		std::cout << "You fucked up >:(\n";
	}
	
	sp = Span(5);

	try
	{
		sp.addNumber(42);
		sp.addNumber(21);
		sp.addNumber(17);
		sp.addNumber(49);
		sp.addNumber(6);
		sp.addNumber(1000);
	}
	catch(const std::exception& e)
	{
		std::cout << "pls\n";
	}

	std::cout << "Shortest Span: " << sp.shortestSpan() << '\n';
	std::cout << "Longest Span: " << sp.longestSpan() << '\n';

	sp = Span(10000);
	std::vector<int>	vec;

	std::srand(static_cast<unsigned int>(std::time(0)));
	

	for (int i = 0; i < 10001; ++i)
		vec.push_back(std::rand());
	
	try
	{
		sp.addNumber(vec.begin(), vec.end());
		std::cout << "yes that's correct\n";
	}
	catch(const std::exception& e)
	{
		std::cout << "no it's not D:<\n";
	}
	
	vec.pop_back();
	sp.addNumber(vec.begin(), vec.end());

	std::cout << "Shortest Span: " << sp.shortestSpan() << '\n';
	std::cout << "Longest Span: " << sp.longestSpan() << '\n';
	
	return 0;
}
