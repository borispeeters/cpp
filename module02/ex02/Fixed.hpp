/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/02 00:42:14 by bpeeters       #+#    #+#                */
/*   Updated: 2020/04/02 21:44:12 by bpeeters      ########   odam.nl         */
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
	Fixed	operator+(const Fixed &fixed) const;
	Fixed	operator-(const Fixed &fixed) const;
	Fixed	operator*(const Fixed &fixed) const;
	Fixed	operator/(const Fixed &fixed) const;
	bool	operator==(const Fixed &fixed) const;
	bool	operator!=(const Fixed &fixed) const;
	bool	operator<=(const Fixed &fixed) const;
	bool	operator>=(const Fixed &fixed) const;
	bool	operator<(const Fixed &fixed) const;
	bool	operator>(const Fixed &fixed) const;
	Fixed&	operator++();
	Fixed&	operator--();
	Fixed	operator++(int);
	Fixed	operator--(int);
	int		getRawBits() const;
	void	setRawBits(int const raw);
	static Fixed&	min(Fixed &f1, Fixed &f2);
	static Fixed&	max(Fixed &f1, Fixed &f2);
	static const Fixed&	min(const Fixed &f1, const Fixed &f2);
	static const Fixed&	max(const Fixed &f1, const Fixed &f2);
private:
	static const int	fractionalBits = 8;
	int					m_fixedValue;
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);

#endif
