/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 11:53:03 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/07/29 14:34:42 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>

class Span
{
private:
	Span();
public:
	Span(unsigned int N);
	virtual ~Span();
	Span(Span const & span);
	Span&	operator=(Span const & span);
	void	addNumber(int n);
	int		shortestSpan();
	int		longestSpan();
private:
	std::vector<int>	m_numbers;
	unsigned int		m_length;
};

#endif
