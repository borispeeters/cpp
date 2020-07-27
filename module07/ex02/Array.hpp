/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/05 23:54:53 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/07/11 13:43:52 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <class T>
class Array
{
private:
	T				*m_array;
	unsigned int	m_size;
public:
	Array();
	Array(unsigned int n);
	virtual ~Array();
	Array(Array const & array);
	Array&	operator=(Array const & array);
	T&		operator[](unsigned int index);
	const T&	operator[](unsigned int index) const;
	unsigned int	size() const;
};

# include "Array.ipp"

#endif
