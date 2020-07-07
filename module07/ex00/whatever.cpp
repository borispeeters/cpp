/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/05 23:18:11 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/07/07 14:21:59 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void	swap(T & x, T & y)
{
	T	tmp;

	tmp = x;
	x = y;
	y = tmp;
}

template <typename T>
const T&	min(const T & x, const T & y)
{
	if (x < y)
		return x;
	return y;
}

template <typename T>
const T&	max(const T & x, const T & y)
{
	if (x > y)
		return x;
	return y;
}

int main( void )
{
	int	a = 2;
	int	b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string	c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	int	a2 = 3;
	::swap(a, a2);
	std::cout << "a = " << a << ", a2 = " << a2 << std::endl;
	std::cout << "min( a, a2 ) = " << ::min( a, a2 ) << std::endl;
	std::cout << "max( a, a2 ) = " << ::max( a, a2 ) << std::endl;
	float	e = 4.2f;
	float	f = 1.0f;
	::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;
	return 0;
}
