/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/05 23:35:57 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/07/28 21:57:04 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef> // for std::size_t
#include <iostream>
#include <string>

template <typename T>
void	print(const T & t)
{
	std::cout << t << '\n';
}

template <typename T>
void	iter(T *array, std::size_t length, void (*f)(T const & t))
{
	for (std::size_t i = 0; i < length; ++i)
		f(array[i]);
}

int	main()
{
	int		x[] = {1, 2, 3, 4, 5};
	float	y[] = {42.42, 33.33, 0.7};
	std::string	str[] = {"fuck", "ft", "services"};

	iter(x, 5, print);
	iter(y, 3, print);
	iter(str, 3, print);
	return 0;
}
