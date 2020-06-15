/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/13 18:14:42 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/15 11:32:41 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{
}

Enemy::Enemy(int hp, std::string const & type):
    m_hp(hp),
    m_type(type)
{
}

Enemy::~Enemy()
{
}

Enemy::Enemy(Enemy const & enemy):
	m_hp(enemy.m_hp),
	m_type(enemy.m_type)
{
}

Enemy&	Enemy::operator=(const Enemy & enemy)
{
	if (&enemy != this)
	{
		m_hp = enemy.getHP();
		m_type = enemy.getType();
	}
	return *this;
}

std::string const & Enemy::getType() const
{
	return m_type;
}

int Enemy::getHP() const
{
	return m_hp;
}

void	Enemy::takeDamage(int damage)
{
	if (damage > 0)
		m_hp -= damage;
	if (m_hp < 0)
		m_hp = 0;
}
