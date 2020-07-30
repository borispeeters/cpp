/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 19:41:47 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/07/30 19:35:45 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <deque>
# include <stack>

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
	MutantStack();
	virtual ~MutantStack();
	MutantStack(MutantStack<T, Container> const & mstack);
	MutantStack<T, Container>&	operator=(MutantStack<T, Container> const & mstack);

	typedef	typename std::stack<T, Container>::container_type::iterator iterator;
	typedef	typename std::stack<T, Container>::container_type::reverse_iterator reverse_iterator;
	
	iterator	begin()
	{
		return this->c.begin();
	}
	iterator	end()
	{
		return this->c.end();
	}
	reverse_iterator	rbegin()
	{
		return this->c.rbegin();
	}
	reverse_iterator	rend()
	{
		return this->c.rend();
	}
private:
};

template <class T, class Container>
MutantStack<T, Container>::MutantStack()
{
}

template <class T, class Container>
MutantStack<T, Container>::~MutantStack()
{
}

template <class T, class Container>
MutantStack<T, Container>::MutantStack(MutantStack<T, Container> const & mstack):
	std::stack<T, Container>(mstack)
{
}

template <class T, class Container>
MutantStack<T, Container>&	MutantStack<T, Container>::operator=(MutantStack<T, Container> const & mstack)
{
	if (&mstack != this)
		std::stack<T, Container>::operator=(mstack);
	return *this;
}

#endif
