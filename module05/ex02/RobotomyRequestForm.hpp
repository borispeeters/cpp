/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 19:40:51 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/07/27 09:29:20 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <string>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	RobotomyRequestForm();
	std::string	m_target;
public:
	RobotomyRequestForm(std::string const & target);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const & robotomy);
	RobotomyRequestForm&	operator=(RobotomyRequestForm const & robotomy);
	virtual void			execute(Bureaucrat const & executor) const;
};

#endif
