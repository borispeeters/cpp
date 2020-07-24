/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.ipp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/10 23:38:26 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/07/11 14:45:15 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <exception>

template <class T>
Array<T>::Array():
	m_array(NULL),
	m_size(0)
{
}

template <class T>
Array<T>::Array(unsigned int n):
	m_array(NULL),
	m_size(n)
{
	if (n <= 0)
		throw std::exception();
	m_array = new T[n]();
}

template <class T>
Array<T>::~Array()
{
	delete[] m_array;
}

template <class T>
Array<T>::Array(Array const & array):
	m_array(NULL),
	m_size(0)
{
	if (array.size() > 0)
	{
		m_array = new T[array.size()]();

		for (unsigned int i = 0; i < array.size(); ++i)
		{
			m_array[i] = array.m_array[i];
		}
		m_size = array.size();
	}
}

template <class T>
Array<T>&	Array<T>::operator=(Array const & array)
{
	if (&array == this)
		return *this;

	delete[] m_array;
	m_array = NULL;
	m_size = 0;

	if (array.size() > 0)
	{
		m_array = new T[array.size()]();

		for (unsigned int i = 0; i < array.size(); ++i)
		{
			m_array[i] = array.m_array[i];
		}
		m_size = array.size();
	}
	return *this;
}

template <class T>
T&	Array<T>::operator[](unsigned int index)
{
	if (index < 0 || index >= this->size())
		throw std::exception();
	return m_array[index];
}

template <class T>
const T&	Array<T>::operator[](unsigned int index) const
{
	if (index < 0 || index >= this->size())
		throw std::exception();
	return m_array[index];
}

template <class T>
unsigned int	Array<T>::size() const
{
	return m_size;
}
