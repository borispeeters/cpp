/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/02 00:42:12 by bpeeters       #+#    #+#                */
/*   Updated: 2020/04/02 21:41:31 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>
#include "Fixed.hpp"

const int		Fixed::fractionalBits;

Fixed::Fixed() : m_fixedValue(0)
{
}

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
}

Fixed::Fixed(const int intValue)
{
	m_fixedValue = intValue * (1 << fractionalBits);
}

Fixed::Fixed(const float floatValue)
{
	m_fixedValue = roundf(floatValue * (1 << fractionalBits));
}

Fixed::~Fixed()
{
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
	m_fixedValue = fixed.getRawBits();
	return *this;
}

Fixed	Fixed::operator+(const Fixed &fixed) const
{
	return toFloat() + fixed.toFloat();
}

Fixed	Fixed::operator-(const Fixed &fixed) const
{
	return toFloat() - fixed.toFloat();
}

Fixed	Fixed::operator*(const Fixed &fixed) const
{
	return toFloat() * fixed.toFloat();
}

Fixed	Fixed::operator/(const Fixed &fixed) const
{
	return toFloat() / fixed.toFloat();
}

bool	Fixed::operator==(const Fixed &fixed) const
{
	return getRawBits() == fixed.getRawBits();
}

bool	Fixed::operator!=(const Fixed &fixed) const
{
	return getRawBits() != fixed.getRawBits();
}

bool	Fixed::operator<=(const Fixed &fixed) const
{
	return getRawBits() <= fixed.getRawBits();
}

bool	Fixed::operator>=(const Fixed &fixed) const
{
	return getRawBits() >= fixed.getRawBits();
}

bool	Fixed::operator<(const Fixed &fixed) const
{
	return getRawBits() < fixed.getRawBits();
}

bool	Fixed::operator>(const Fixed &fixed) const
{
	return getRawBits() > fixed.getRawBits();
}

Fixed&	Fixed::operator++()
{
	++m_fixedValue;
	return *this;
}

Fixed&	Fixed::operator--()
{
	++m_fixedValue;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);
	++m_fixedValue;
	return temp;
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);
	--m_fixedValue;
	return temp;
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}

int		Fixed::getRawBits() const
{
	return m_fixedValue;
}

void	Fixed::setRawBits(int const raw)
{
	m_fixedValue = raw;
}

Fixed&	Fixed::min(Fixed &f1, Fixed &f2)
{
	return (f1 < f2) ? f1 : f2;
}

Fixed&	Fixed::max(Fixed &f1, Fixed &f2)
{
	return (f1 > f2) ? f1 : f2;
}

const Fixed&	Fixed::min(const Fixed &f1, const Fixed &f2)
{
	return (f1 < f2) ? f1 : f2;
}

const Fixed&	Fixed::max(const Fixed &f1, const Fixed &f2)
{
	return (f1 > f2) ? f1 : f2;
}
