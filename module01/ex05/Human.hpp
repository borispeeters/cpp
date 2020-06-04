/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/31 23:09:59 by bpeeters       #+#    #+#                */
/*   Updated: 2020/04/01 05:36:59 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human
{
public:
	Human();
	const Brain&	getBrain() const;
	const Brain*	identify() const;
private:
	const Brain		m_brain;
};

#endif
