/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/16 16:40:54 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/16 17:00:10 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"

Ice::Ice():
	AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(Ice const & ice):
	AMateria(ice)
{
}

Ice&	Ice::operator=(Ice const & ice)
{
	return *this;
}

AMateria*	Ice::clone() const
{
	Ice	*ret = new (std::nothrow) Ice(*this);
	if (!ret)
	{
		std::cerr << "Failed to clone Ice\n";
		return NULL;
	}
	return ret;
}

void		Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at NAME *\n";
	AMateria::use(target);
}
