/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/31 23:37:15 by bpeeters       #+#    #+#                */
/*   Updated: 2020/04/01 05:36:53 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"

Human::Human()
{
}

const Brain&	Human::getBrain() const
{
	return m_brain;
}

const Brain*	Human::identify() const
{
	return getBrain().identify();
}
