/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/16 17:51:30 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/17 17:13:19 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		m_inventory[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		delete m_inventory[i];
		m_inventory[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const & mat_src)
{
	for (int i = 0; i < 4; ++i)
	{
		if (!mat_src.m_inventory[i])
			m_inventory[i] = NULL;
		else
			m_inventory[i] = mat_src.m_inventory[i]->clone();
	}
}

MateriaSource&	MateriaSource::operator=(MateriaSource const & mat_src)
{
	if (&mat_src == this)
		return *this;

	for (int i = 0; i < 4; ++i)
	{
		delete m_inventory[i];
		if (!mat_src.m_inventory[i])
			m_inventory[i] = NULL;
		else
			m_inventory[i] = mat_src.m_inventory[i]->clone();
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; ++i)
	{
		if (!m_inventory[i])
		{
			m_inventory[i] = m;
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (m_inventory[i])
		{
			if (m_inventory[i]->getType() == type)
				return m_inventory[i]->clone();
		}
	}
	return NULL;
}
