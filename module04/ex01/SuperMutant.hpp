/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/13 18:24:40 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/15 09:39:58 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
    SuperMutant();
    virtual ~SuperMutant();
    SuperMutant(SuperMutant const & supermutant);
    SuperMutant&    operator=(const SuperMutant & supermutant);
    virtual void	takeDamage(int damage);
};

#endif
