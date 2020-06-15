/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/15 14:03:41 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/15 18:05:05 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class Squad : public ISquad
{
private:
	int				m_count;
	ISpaceMarine	**m_units;
public:
	Squad();
	virtual ~Squad();
	Squad(Squad const & squad);
	Squad&	operator=(Squad const & squad);
	virtual int				getCount() const;
	virtual ISpaceMarine*	getUnit(int index) const;
	virtual int				push(ISpaceMarine *unit);
};

#endif
