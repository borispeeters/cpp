/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 18:35:36 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/18 19:18:58 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::GradeTooHighException::GradeTooHighException():
	runtime_error("grade is too high")
{
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{
}

Form::GradeTooLowException::GradeTooLowException():
	runtime_error("grade is too low")
{
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{
}

Form::Form():
	m_signGrade(150),
	m_execGrade(150)
{
}

Form::Form(std::string const & name, int signGrade, int execGrade):
	m_name(name),
	m_signed(false),
	m_signGrade(signGrade),
	m_execGrade(execGrade)
{
	if (m_signGrade < 1 || m_execGrade < 1)
		throw Form::GradeTooHighException();
	if (m_signGrade > 150 || m_execGrade > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{
}

Form::Form(Form const & form):
	m_name(form.getName()),
	m_signed(form.getSigned()),
	m_signGrade(form.getSignGrade()),
	m_execGrade(form.getExecGrade())
{
	if (m_signGrade < 1 || m_execGrade < 1)
		throw Form::GradeTooHighException();
	if (m_signGrade > 150 || m_execGrade > 150)
		throw Form::GradeTooLowException();
}

Form&	Form::operator=(Form const & form)
{
	if (&form != this)
	{
		m_signed = form.getSigned();
	}
	return *this;
}

std::string const &	Form::getName() const
{
	return m_name;
}

bool				Form::getSigned() const
{
	return m_signed;
}

int					Form::getSignGrade() const
{
	return m_signGrade;
}

int					Form::getExecGrade() const
{
	return m_execGrade;
}

void				Form::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() > getSignGrade())
		throw Form::GradeTooLowException();
	m_signed = true;
}

std::ostream&	operator<<(std::ostream & out, Form const & form)
{
	out << "Form " << form.getName() << " is ";
	if (form.getSigned() == false)
		out << "not ";
	out << "signed. It requires grade " << form.getSignGrade() << " to be signed and grade " << form.getExecGrade() << " to be executed.";
	return out;
}
