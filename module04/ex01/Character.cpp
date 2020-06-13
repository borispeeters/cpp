/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/13 18:42:21 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/13 19:02:52 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "Enemy.hpp"

Character::Character()
{
    m_ap = 40;
}

Character::Character(std::string const & name):
    m_name(name)
{
}

Character::~Character()
{
    
}

Character&  Character::operator=(Character const & character)
{
    if (&character == this)
        return *this;
    m_name = character.m_name;
    m_ap = character.m_ap;
    m_aweapon = character.m_aweapon;
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
    std::cout << getName() << " attacks " << enemy->getType() << " with a " << m_aweapon->getName() << '\n';
    m_aweapon->attack();
    enemy->takeDamage(m_aweapon->getDamage());
    if (enemy->getHP <= 0)
        delete enemy;
}

std::string const & Character::getName() const
{
    return m_name;
}

std::ostream& operator<<(std::ostream &out, const Character &character)
{
    return character.print(out);
}


You will also implement an overload of the << to ostream operator to display the
attributes of your Character . Add every necessary getter function.
This overload will display:
NAME has AP_NUMBER AP and wields a WEAPON_NAME
if there’s a weapon equipped. Else, it will display:
NAME has AP_NUMBER AP and is unarmed