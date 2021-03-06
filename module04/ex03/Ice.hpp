/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/15 19:20:05 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/16 17:00:34 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	virtual ~Ice();
	Ice(Ice const & ice);
	Ice&	operator=(Ice const & ice);
	AMateria*	clone() const;
	void		use(ICharacter & target);
};

#endif
