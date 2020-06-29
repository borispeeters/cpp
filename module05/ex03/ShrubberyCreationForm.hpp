/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 19:39:58 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/29 16:16:02 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <string>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	ShrubberyCreationForm();
	std::string	m_target;
public:
	ShrubberyCreationForm(std::string const & target);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const & shrubbery);
	ShrubberyCreationForm&	operator=(ShrubberyCreationForm const & shrubbery);
	class ErrorOpenFileException : public std::runtime_error
	{
	public:
		ErrorOpenFileException();
		virtual ~ErrorOpenFileException() throw();
	};
	virtual void			execute(Bureaucrat const & executor) const;
	virtual Form*			clone() const;
};

#endif
