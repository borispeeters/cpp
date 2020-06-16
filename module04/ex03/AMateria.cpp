/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/16 16:29:26 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/16 16:35:40 by bpeeters      ########   odam.nl         */
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

AMateria::AMateria(AMateria const & amateria)
{
}

AMateria&	AMateria::operator=(AMateria const & amateria)
{
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
	m_xp += 10;
}