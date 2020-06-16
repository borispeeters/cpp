/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/16 17:22:05 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/16 17:25:02 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name)
{
}

Character::~Character()
{
}

Character::Character(Character const & character)
{
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