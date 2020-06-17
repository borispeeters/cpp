/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/16 16:29:26 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/17 17:13:05 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const & type):
	m_type(type),
	m_xp(0)
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(AMateria const & amateria):
	m_type(amateria.getType()),
	m_xp(amateria.getXP())
{
}

AMateria&	AMateria::operator=(AMateria const & amateria)
{
	if (&amateria != this)
	{
		m_type = amateria.getType();
		m_xp = amateria.getXP();
	}
	return *this;
}

std::string const &	AMateria::getType() const
{
	return m_type;
}

unsigned int		AMateria::getXP() const
{
	return m_xp;
}

void				AMateria::use(ICharacter & target)
{
	(void)target;
	m_xp += 10;
}
