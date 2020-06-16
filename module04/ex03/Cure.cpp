/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/16 16:45:55 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/16 16:57:38 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"

Cure::Cure():
	AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure::Cure(Cure const & cure):
	AMateria(cure)
{
}

Cure&	Cure::operator=(Cure const & cure)
{
	return *this;
}

AMateria*	Cure::clone() const
{
	Cure	*ret = new (std::nothrow) Cure(*this);
	if (!ret)
	{
		std::cerr << "Failed to clone Cure\n";
		return NULL;
	}
	return ret;
}

void		Cure::use(ICharacter & target)
{
	std::cout << "* heals NAME's wounds *\n";
	AMateria::use(target);
}
