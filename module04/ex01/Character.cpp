/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/13 18:42:21 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/15 11:36:02 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "Enemy.hpp"

Character::Character()
{
}

Character::Character(std::string const & name):
	m_name(name),
	m_ap(40),
	m_aweapon(NULL)
{
}

Character::~Character()
{
}

Character&  Character::operator=(Character const & character)
{
    if (&character != this)
	{
		m_name = character.m_name;
		m_ap = character.m_ap;
		m_aweapon = character.m_aweapon;
	}
    return *this;
}

void    Character::recoverAP()
{
    m_ap += 10;
    if (m_ap > 40)
        m_ap = 40;
}

void    Character::equip(AWeapon *aweapon)
{
    m_aweapon = aweapon;
}

void    Character::attack(Enemy *enemy)
{
	if (enemy == NULL || m_aweapon == NULL)
		return ;
	if (m_ap < m_aweapon->getAPCost())
		return ;
	m_ap -= m_aweapon->getAPCost();
	if (m_ap < 0)
		m_ap = 0;
    std::cout << getName() << " attacks " << enemy->getType() << " with a " << m_aweapon->getName() << '\n';
    m_aweapon->attack();
    enemy->takeDamage(m_aweapon->getDamage());
    if (enemy->getHP() <= 0)
        delete enemy;
}

std::string const & Character::getName() const
{
    return m_name;
}

int					Character::getAP() const
{
    return m_ap;
}

AWeapon				*Character::getWeapon() const
{
	return m_aweapon;
}

std::ostream& operator<<(std::ostream &out, const Character & character)
{
	if (character.getWeapon())
    	out << character.getName() << " has " << character.getAP() << " AP and wields a " << character.getWeapon()->getName() << '\n';
	else
	{
		out << character.getName() << " has " << character.getAP() << " AP and is unarmed\n";
	}
	
	return out;
}
