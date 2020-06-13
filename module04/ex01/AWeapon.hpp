/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/12 14:41:59 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/13 18:57:21 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <string>

class AWeapon
{
private:
    AWeapon();
public:
    AWeapon(std::string const & name, int apcost, int damage);
    AWeapon(AWeapon const & weapon);
    virtual ~AWeapon();
    AWeapon&		operator=(const AWeapon & aweapon);
    std::string const& getName() const;
    int getAPCost() const;
    int getDamage() const;
    virtual void    attack() const = 0;
protected:
    std::string m_name;
    int         m_apcost;
    int         m_damage;
};

#endif
