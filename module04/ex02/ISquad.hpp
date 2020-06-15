/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISquad.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/15 11:43:55 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/15 14:06:59 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include "ISpaceMarine.hpp"

class ISquad
{
public:
	virtual ~ISquad() {}
	virtual int	getCount() const = 0;
	virtual ISpaceMarine	*getUnit(int) const = 0;
	virtual int	push(ISpaceMarine*) = 0;
};

#endif
