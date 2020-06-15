/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISpaceMarine.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/15 11:47:52 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/15 11:49:39 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

class ISpaceMarine
{
public:
	virtual ~ISpaceMarine() {}
	virtual	ISpaceMarine	*clone() const = 0;
	virtual	void			battleCry() const = 0;
	virtual	void			rangedAttack() const = 0;
	virtual	void			meleeAttack() const = 0;
};

#endif
