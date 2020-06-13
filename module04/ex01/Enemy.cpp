/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/13 18:14:42 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/13 18:23:58 by bpeeters      ########   odam.nl         */
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

Enemy::Enemy(Enemy const & enemy)
{
	*this = enemy;
}

Enemy&	Enemy::operator=(const Enemy & enemy)
{
	if (&enemy == this)
		return *this;
	m_hp = enemy.getHP;
	m_type = enemy.getType;
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
	if (damage < 0)
		return ;
	m_hp -= damage;
}
