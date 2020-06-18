/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 18:24:19 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/18 18:54:12 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>

class Bureaucrat;

class Form
{
private:
	std::string const	m_name;
	bool				m_signed;
	int const			m_signGrade;
	int const			m_execGrade;
	Form();
public:
	Form(std::string const & name, int signGrade, int execGrade);
	virtual ~Form();
	Form(Form const & form);
	Form&	operator=(Form const & form);
	class GradeTooHighException : public std::runtime_error
	{
	public:
		GradeTooHighException();
		virtual ~GradeTooHighException() throw();
	};
	class GradeTooLowException : public std::runtime_error
	{
	public:
		GradeTooLowException();
		virtual ~GradeTooLowException() throw();
	};
	std::string const &	getName() const;
	bool				getSigned() const;
	int					getSignGrade() const;
	int					getExecGrade() const;
	void				beSigned(Bureaucrat const & bureaucrat);
};

std::ostream&	operator<<(std::ostream & out, Form const & form);

#endif
