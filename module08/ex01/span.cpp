/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 13:59:25 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/07/29 17:41:28 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <algorithm>
#include <exception>

Span::Span(): m_length(0)
{
}

Span::Span(unsigned int N): m_length(N)
{
}

Span::~Span()
{
}

Span::Span(Span const & span):
	m_numbers(span.m_numbers),
	m_length(span.m_length)
{
}

Span&	Span::operator=(Span const & span)
{
	if (&span != this)
	{
		m_numbers = span.m_numbers;
		m_length = span.m_length;
	}
	return *this;
}

void	Span::addNumber(int n)
{
	if (m_numbers.size() >= m_length)
		throw std::exception();

	m_numbers.push_back(n);
}

int		Span::shortestSpan()
{
	if (m_numbers.size() <= 1)
		throw std::exception();

	std::sort(m_numbers.begin(), m_numbers.end());

	std::vector<int>	span;

	std::vector<int>::iterator	it = ++m_numbers.begin();
	while (it != m_numbers.end())
	{
		span.push_back(*it - *(it - 1));
		++it;
	}
	return *std::min_element(span.begin(), span.end());
}

int		Span::longestSpan()
{
	if (m_numbers.size() <= 1)
		throw std::exception();

	std::vector<int>::iterator	min;
	std::vector<int>::iterator	max;

	min = std::min_element(m_numbers.begin(), m_numbers.end());
	max = std::max_element(m_numbers.begin(), m_numbers.end());

	return *max - *min;
}
