/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/16 17:22:05 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/17 18:31:33 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "Character.hpp"

Character::Character()
{
}

Character::Character(std::string const & name):
	m_name(name)
{
	for (int i = 0; i < 4; ++i)
		m_inventory[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < 4; ++i)
	{
		delete m_inventory[i];
		m_inventory[i] = NULL;
	}
}

Character::Character(Character const & character):
	m_name(character.getName())
{
	for (int i = 0; i < 4; ++i)
	{
		if (m_inventory[i] == character.m_inventory[i])
			return ;
	}
	for (int i = 0; i < 4; ++i)
	{
		if (!character.m_inventory[i])
			m_inventory[i] = NULL;
		else
			m_inventory[i] = character.m_inventory[i]->clone();
	}
}

Character&	Character::operator=(Character const & character)
{
	if (&character == this)
		return *this;

	for (int i = 0; i < 4; ++i)
	{
		if (m_inventory[i] == character.m_inventory[i])
			return *this;
	}

	m_name = character.getName();

	for (int i = 0; i < 4; ++i)
	{
		delete m_inventory[i];
		if (!character.m_inventory[i])
			m_inventory[i] = NULL;
		else
			m_inventory[i] = character.m_inventory[i]->clone();
	}
	return *this;
}

std::string const &	Character::getName() const
{
	return m_name;
}

void	Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; ++i)
	{
		if (m_inventory[i] == m)
			return ;
	}
	for (int i = 0; i < 4; ++i)
	{
		if (!m_inventory[i])
		{
			m_inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	m_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter & target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (m_inventory[idx])
		m_inventory[idx]->use(target);
}
