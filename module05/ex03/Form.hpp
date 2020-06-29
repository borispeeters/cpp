/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 18:24:19 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/29 17:51:48 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <stdbool.h>
# include <string>

class Bureaucrat;

class Form
{
private:
	std::string const	m_name;
	bool			 	m_isSigned;
	int const			m_signGrade;
	int const			m_execGrade;
	Form();
protected:
	Form(std::string const & name, int signGrade, int execGrade, bool isSigned);
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
	class FormNotSignedException : public std::runtime_error
	{
	public:
		FormNotSignedException();
		virtual ~FormNotSignedException() throw();
	};
	std::string const &	getName() const;
	bool				getSigned() const;
	int					getSignGrade() const;
	int					getExecGrade() const;
	void				beSigned(Bureaucrat const & bureaucrat);
	virtual void		execute(Bureaucrat const & executor) const = 0;
	virtual Form*		clone() const = 0;
};

std::ostream&	operator<<(std::ostream & out, Form const & form);

#endif
