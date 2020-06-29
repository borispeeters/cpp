/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/29 16:13:12 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/29 17:51:01 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"
#include "Intern.hpp"

Intern::Intern()
{
	for (int i = 0; i < 3; ++i)
	{
		m_forms[i] = NULL;
	}
}

Intern::~Intern()
{
}

Intern::Intern(Intern const & intern)
{
	(void)intern;
}

Intern&	Intern::operator=(Intern const & intern)
{
	(void)intern;
	return *this;
}

Form*	Intern::makeForm(std::string const & form, std::string const & target)
{
	Form	*ret = NULL;

	m_forms[0] = new PresidentialPardonForm(target);
	m_forms[1] = new RobotomyRequestForm(target);
	m_forms[2] = new ShrubberyCreationForm(target);

	for (int i = 0; i < 3; ++i)
	{
		if (m_forms[i]->getName() == form)
			ret = m_forms[i]->clone();
	}

	if (!ret)
		std::cerr << "Requested form " << form << " is not known\n";

	for (int i = 0; i < 3; ++i)
	{
		delete m_forms[i];
		m_forms[i] = NULL;
	}
	
	return ret;
}
