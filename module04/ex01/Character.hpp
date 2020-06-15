/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/13 18:37:40 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/15 11:24:08 by bpeeters      ########   odam.nl         */
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
    Character&  operator=(Character const & character);
    void    recoverAP();
    void    equip(AWeapon*);
    void    attack(Enemy*);
    std::string const & getName() const;
	int					getAP() const;
	AWeapon				*getWeapon() const;
private:
    std::string	m_name;
    int			m_ap;
    AWeapon		*m_aweapon;
};

std::ostream& operator<<(std::ostream &out, const Character &character);

#endif
