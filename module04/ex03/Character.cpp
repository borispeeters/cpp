/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/16 17:22:05 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/17 09:36:51 by bpeeters      ########   odam.nl         */
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
}

Character::Character(Character const & character):
	Character(character.getName())
{
	for (int i = 0;)
}

Character&	Character::operator=(Character const & character)
{
	return *this;
}

std::string const &	Character::getName() const
{
	return m_name;
}

void	Character::equip(AMateria* m)
{
}

void	Character::unequip(int idx)
{
}

void	Character::use(int idx, ICharacter & target)
{
}