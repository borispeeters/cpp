/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/01 22:00:52 by bpeeters       #+#    #+#                */
/*   Updated: 2020/04/02 21:44:23 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed &fixed);
	Fixed(const int intValue);
	Fixed(const float floatValue);
	~Fixed();
	float	toFloat() const;
	int		toInt() const;
	Fixed&	operator=(const Fixed &fixed);
	int		getRawBits() const;
	void	setRawBits(int const raw);
private:
	static const int	fractionalBits = 8;
	int					m_fixedValue;
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);

#endif
