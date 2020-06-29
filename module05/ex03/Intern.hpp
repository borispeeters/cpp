/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/29 16:07:35 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/29 17:46:06 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

// class Form;

class Intern
{
private:
	Form	*m_forms[3];
public:
	Intern();
	virtual ~Intern();
	Intern(Intern const & intern);
	Intern&	operator=(Intern const & intern);
	Form*	makeForm(std::string const & form, std::string const & target);
};

#endif
