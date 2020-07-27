/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/15 14:08:16 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/07/11 11:02:43 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stddef.h>
#include "Squad.hpp"

Squad::Squad():
	m_count(0),
	m_units(NULL)
{
}

Squad::~Squad()
{
	for (int i = 0; i < m_count; ++i)
		delete m_units[i];
	delete[] m_units;
}

Squad::Squad(Squad const & squad):
	m_count(squad.getCount())
{
	ISpaceMarine	**m_units = new (std::nothrow) ISpaceMarine *[m_count];
	if (!m_units)
	{
		std::cerr << "Failed to allocate squad in copy constructor\n";
		m_count = 0;
		return ;
	}
	for (int i = 0; i < m_count; ++i)
	{
		m_units[i] = squad.getUnit(i)->clone();
		if (!m_units[i])
		{
			std::cerr << "Failed to allocate squad in copy constructor\n";
			while (i > 0)
			{
				--i;
				delete m_units[i];
			}
			delete[] m_units;
			m_units = NULL;
			m_count = 0;
			return ;
		} 
	}
}

Squad&	Squad::operator=(Squad const & squad)
{
	for (int i = 0; i < getCount(); ++i)
		delete m_units[i];
	delete[] m_units;

	ISpaceMarine	**m_units = new (std::nothrow) ISpaceMarine *[squad.getCount()];
	if (!m_units)
	{
		std::cerr << "Failed to allocate squad in assignment\n";
		m_count = 0;
		return *this;
	}
	for (int i = 0; i < getCount(); ++i)
	{
		m_units[i] = squad.getUnit(i)->clone();
		if (!m_units[i])
		{
			std::cerr << "Failed to allocate squad in assignment\n";
			while (i > 0)
			{
				--i;
				delete m_units[i];
			}
			delete[] m_units;
			m_units = NULL;
			m_count = 0;
			return *this;
		}
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
	if (!unit)
		return m_count;
	for (int i = 0; i < m_count; ++i)
	{
		if (m_units[i] == unit)
			return m_count;
	}
	
	ISpaceMarine	**new_units = new (std::nothrow) ISpaceMarine *[m_count + 1];
	if (!new_units)
	{
		std::cerr << "Failed to allocate squad\n";
		return m_count;
	}
	for (int i = 0; i < m_count; ++i)
		new_units[i] = m_units[i];
	delete[] m_units;
	m_units = new_units;
	m_units[m_count] = unit;
	++m_count;
	return m_count;
}
