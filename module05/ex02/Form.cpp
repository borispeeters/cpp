/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 18:35:36 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/19 16:36:34 by bpeeters      ########   odam.nl         */
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

Form::FormNotSignedException::FormNotSignedException():
	runtime_error("form is not signed")
{
}

Form::FormNotSignedException::~FormNotSignedException() throw()
{
}

Form::Form():
	m_signGrade(150),
	m_execGrade(150)
{
}

Form::Form(std::string const & name, int signGrade, int execGrade, bool isSigned):
	m_name(name),
	m_isSigned(isSigned),
	m_signGrade(signGrade),
	m_execGrade(execGrade)
{
	if (m_signGrade < 1 || m_execGrade < 1)
		throw Form::GradeTooHighException();
	if (m_signGrade > 150 || m_execGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(std::string const & name, int signGrade, int execGrade):
	m_name(name),
	m_isSigned(false),
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
	m_isSigned(form.getSigned()),
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
		m_isSigned = form.getSigned();
	}
	return *this;
}

std::string const &	Form::getName() const
{
	return m_name;
}

bool				Form::getSigned() const
{
	return m_isSigned;
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
	m_isSigned = true;
}

void				Form::execute(Bureaucrat const & executor) const
{
	if (getSigned() == false)
		throw Form::FormNotSignedException();
	if (executor.getGrade() > getExecGrade())
		throw Form::GradeTooLowException();
}

std::ostream&	operator<<(std::ostream & out, Form const & form)
{
	out << "Form " << form.getName() << " is ";
	if (form.getSigned() == false)
		out << "not ";
	out << "signed. It requires grade " << form.getSignGrade() << " to be signed and grade " << form.getExecGrade() << " to be executed.";
	return out;
}
