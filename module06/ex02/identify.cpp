/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   identify.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/05 23:12:50 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/07/07 14:13:34 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

Base	*generate(void)
{
	static bool	seeded = false;
	if (!seeded)
	{
		std::srand(static_cast<unsigned int>(std::time(0)));
		std::rand();
		seeded = true;
	}
	static const double	fraction = 1.0 / (RAND_MAX + 1.0);
	int	result = (3 * (std::rand() * fraction));

	if (result == 0)
		return new A;
	if (result == 1)
		return new B;
	return new C;
}

void	identify_from_pointer(Base *p)
{
	A	*a = dynamic_cast<A*>(p);
	B	*b = dynamic_cast<B*>(p);
	C	*c = dynamic_cast<C*>(p);

	if (a)
		std::cout << "A\n";
	if (b)
		std::cout << "B\n";
	if (c)
		std::cout << "C\n";
}

void	identify_from_reference(Base & p)
{
	bool	a = true;
	bool	b = true;
	bool	c = true;

	try
	{
		A	a = dynamic_cast<A&>(p);
	}
	catch(const std::exception& e)
	{
		a = false;
	}
	try
	{
		B	b = dynamic_cast<B&>(p);
	}
	catch(const std::exception& e)
	{
		b = false;
	}
	try
	{
		C	c = dynamic_cast<C&>(p);
	}
	catch(const std::exception& e)
	{
		c = false;
	}

	if (a)
		std::cout << "A\n";
	if (b)
		std::cout << "B\n";
	if (c)
		std::cout << "C\n";
}
