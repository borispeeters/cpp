/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 11:53:03 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/07/29 22:34:48 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <exception>
# include <vector>

class Span
{
public:
	Span();
	Span(unsigned int N);
	virtual ~Span();
	Span(Span const & span);
	Span&	operator=(Span const & span);
	void	addNumber(int n);
	template <typename Iterator>
	void	addNumber(Iterator first, Iterator last)
	{
		if (std::distance(first, last) + m_numbers.size() > m_length)
			throw std::exception();

		m_numbers.insert(m_numbers.end(), first, last);
	}
	int		shortestSpan();
	int		longestSpan();
private:
	std::vector<int>	m_numbers;
	unsigned int		m_length;
};

#endif
