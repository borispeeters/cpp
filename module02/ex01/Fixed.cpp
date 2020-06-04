/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/01 22:00:54 by bpeeters       #+#    #+#                */
/*   Updated: 2020/04/02 21:41:25 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>
#include "Fixed.hpp"

const int		Fixed::fractionalBits;

Fixed::Fixed() : m_fixedValue(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called\n";
	*this = fixed;
}

Fixed::Fixed(const int intValue)
{
	std::cout << "Int constructor called\n";
	m_fixedValue = intValue * (1 << fractionalBits);
}

Fixed::Fixed(const float floatValue)
{
	std::cout << "Float constructor called\n";
	m_fixedValue = roundf(floatValue * (1 << fractionalBits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

float	Fixed::toFloat() const
{
	return static_cast<float>(m_fixedValue) / (1 << fractionalBits);
}

int		Fixed::toInt() const
{
	return m_fixedValue / (1 << fractionalBits);
}

Fixed&	Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Assignation operator called\n";
	m_fixedValue = fixed.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}

int		Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called\n";
	return m_fixedValue;
}

void	Fixed::setRawBits(int const raw)
{
	m_fixedValue = raw;
}
