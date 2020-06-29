/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 19:48:00 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/29 16:22:38 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
	Form("presidential pardon", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target):
	Form("presidential pardon", 25, 5),
	m_target(target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & president):
	Form("presidential pardon", 25, 5, president.getSigned()),
	m_target(president.m_target)
{
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const & president)
{
	Form::operator=(president);
	if (&president != this)
	{
		m_target = president.m_target;
	}
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::cout << m_target << " has been pardoned by Zafod Beeblebrox\n";
}

Form*	PresidentialPardonForm::clone() const
{
	PresidentialPardonForm	*ret = new PresidentialPardonForm(*this);
	return ret;
}
