/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/15 14:08:16 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/15 18:12:55 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "Squad.hpp"

Squad::Squad()
{
}

Squad::~Squad()
{
}

Squad::Squad(Squad const & squad)
{
}

Squad&	Squad::operator=(Squad const & squad)
{
	if (&squad != this)
	{
		
	}
	return *this;
}

int	Squad::getCount() const
{
	return m_count;
}

ISpaceMarine*	Squad::getUnit(int index) const
{
	if (index < 0 || index >= m_count)
		return NULL;
	return m_units[index];
}

int	Squad::push(ISpaceMarine *unit)
{
}