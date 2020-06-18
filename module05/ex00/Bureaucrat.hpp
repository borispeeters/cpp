/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 07:57:05 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/18 18:14:15 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <exception>
# include <string>



class Bureaucrat
{
private:
	std::string const		m_name;
	int						m_grade;
	Bureaucrat();
public:
	Bureaucrat(std::string const & name, int grade);
	virtual ~Bureaucrat();
	Bureaucrat(Bureaucrat const & bureaucrat);
	Bureaucrat&	operator=(Bureaucrat const & bureaucrat);
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
	std::string const & getName() const;
	int					getGrade() const;
	void				incrementGrade();
	void				decrementGrade();
};

std::ostream&	operator<<(std::ostream & out, const Bureaucrat & bureaucrat);

#endif
