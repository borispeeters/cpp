/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   identify.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/07 13:52:21 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/07/07 13:53:24 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFY_HPP
# define IDENTIFY_HPP

class Base;

Base	*generate(void);
void	identify_from_pointer(Base *p);
void	identify_from_reference(Base & p);

#endif
