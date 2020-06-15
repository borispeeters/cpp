/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/13 18:31:47 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/15 09:43:33 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
private:
public:
    RadScorpion();
    virtual ~RadScorpion();
    RadScorpion(RadScorpion const & radscorpion);
    RadScorpion&    operator=(const RadScorpion & radscorpion);
};

#endif
