/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/13 18:12:32 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/17 10:54:38 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>

class Enemy
{
private:
    Enemy();
public:
    Enemy(int hp, std::string const & type);
    virtual ~Enemy();
    Enemy(Enemy const & enemy);
    Enemy&  operator=(const Enemy & enemy);
    std::string const & getType() const;
    int getHP() const;
    virtual void    takeDamage(int damage);
protected:
    int         m_hp;
    std::string m_type;
};

#endif
