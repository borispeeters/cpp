/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/31 00:21:23 by bpeeters       #+#    #+#                */
/*   Updated: 2020/03/31 01:34:51 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

class Pony
{
public:
	Pony();
	~Pony();
	void	feed() const;
	void	ride() const;
	void	pet();
private:
	int		m_pets;
};

void	ponyOnTheStack();

void	ponyOnTheHeap();

#endif
