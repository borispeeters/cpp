/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/11 17:00:28 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/07/28 09:57:58 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <exception>

template <typename T>
typename T::iterator	easyfind(T & haystack, int needle)
{
	typename T::iterator	it;

	it = std::find(haystack.begin(), haystack.end(), needle);

	if (it == haystack.end())
		throw std::exception();
	return it;
}

#endif
