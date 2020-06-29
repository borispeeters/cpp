/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 19:41:41 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/19 12:59:22 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <string>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	PresidentialPardonForm();
	std::string	m_target;
public:
	PresidentialPardonForm(std::string const & target);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm const & president);
	PresidentialPardonForm&	operator=(PresidentialPardonForm const & president);
	virtual void			execute(Bureaucrat const & executor) const;
};

#endif
