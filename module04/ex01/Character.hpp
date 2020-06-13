/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/13 18:37:40 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/13 19:01:42 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
private:
    Character();
public:
    Character(std::string const & name);
    virtual ~Character();
    Character&  operator=();
    void    recoverAP();
    void    equip(AWeapon*);
    void    attack(Enemy*);
    std::string const & getName() const;
private:
    std::string const & m_name;
    int     m_ap;
    AWeapon *m_aweapon;
};

std::ostream& operator<<(std::ostream &out, const Character &character);

#endif
