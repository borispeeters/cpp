/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/16 17:51:30 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/16 17:53:24 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
}

MateriaSource::~MateriaSource()
{
}

MateriaSource::MateriaSource(MateriaSource const & mat_src)
{
}

MateriaSource&	MateriaSource::operator=(MateriaSource const & mat_src)
{
	return *this;
}

void	MateriaSource::learnMateria(AMateria*)
{
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
}
