/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/01 05:43:06 by bpeeters       #+#    #+#                */
/*   Updated: 2020/04/02 21:44:32 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed &fixed);
	~Fixed();
	Fixed&	operator=(const Fixed &fixed);
	int		getRawBits() const;
	void	setRawBits(int const raw);
private:
	static const int	fractionalBits = 8;
	int					m_fixedValue;
};

#endif
