/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 16:29:59 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/18 19:22:13 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::GradeTooHighException::GradeTooHighException():
	runtime_error("grade is too high")
{
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
}

Bureaucrat::GradeTooLowException::GradeTooLowException():
	runtime_error("grade is too low")
{
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
}

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string const & name, int grade):
	m_name(name),
	m_grade(grade)
{
	if (m_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (m_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat const & bureaucrat):
	m_name(bureaucrat.getName()),
	m_grade(bureaucrat.getGrade())
{
	if (m_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (m_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const & bureaucrat)
{
	if (&bureaucrat != this)
	{
		m_grade = bureaucrat.getGrade();
	}
	return *this;
}

void				Bureaucrat::signForm(Form & form)
{
	try
	{
		form.beSigned(*this);
		std::cout << getName() << " signs " << form.getName() << '\n';
	}
	catch(const std::exception& e)
	{
		std::cout << getName() << " cannot sign " << form.getName() << " because " << e.what() << '\n';
	}
}

std::string const &	Bureaucrat::getName() const
{
	return m_name;
}

int					Bureaucrat::getGrade() const
{
	return m_grade;
}

void				Bureaucrat::incrementGrade()
{
	--m_grade;
	if (m_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void				Bureaucrat::decrementGrade()
{
	++m_grade;
	if (m_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream&	operator<<(std::ostream & out, const Bureaucrat & bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return out;
}
