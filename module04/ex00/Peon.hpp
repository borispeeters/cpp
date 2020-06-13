/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/11 19:09:14 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/12 14:35:12 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <string>
# include "Victim.hpp"

class Peon : public Victim
{
private:
	Peon();
public:
	Peon(const std::string &name);
	Peon(const Peon &peon);
	virtual ~Peon();
	Peon&	operator=(const Peon &peon);
	virtual void    getPolymorphed() const;
};

#endif
