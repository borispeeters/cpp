/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 19:57:15 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/29 16:23:32 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include <string>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():
	Form("robotomy request", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target):
	Form("robotomy request", 72, 45),
	m_target(target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & robotomy):
	Form("robotomy request", 72, 45, robotomy.getSigned()),
	m_target(robotomy.m_target)
{
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const & robotomy)
{
	Form::operator=(robotomy);
	if (&robotomy != this)
	{
		m_target = robotomy.m_target;
	}
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);

	static bool	seeded = false;
	if (!seeded)
	{
		std::srand(static_cast<unsigned int>(std::time(0)));
		seeded = true;
	}

	bool success = (std::rand() % 2) != 0;

	if (success)
		std::cout << "* drilling noises * " << m_target << " has been robotomized successfully!\n";
	else
		std::cout << "Failure Successfull :D\n";
	
}

Form*	RobotomyRequestForm::clone() const
{
	RobotomyRequestForm	*ret = new RobotomyRequestForm(*this);
	return ret;
}
