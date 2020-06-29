/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 16:38:34 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/29 17:44:40 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	// try
	// {
	// 	Bureaucrat	boris("boris", 3);
	// 	std::cout << boris << '\n';
	// 	boris.incrementGrade();
	// 	std::cout << boris << '\n';
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << "Error: " << e.what() << '\n';
	// }
	// try
	// {
	// 	Bureaucrat	john("john", 150);
	// 	std::cout << john << '\n';
	// 	john.decrementGrade();
	// 	std::cout << john << '\n';
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << "Error: " << e.what() << '\n';
	// }
	// try
	// {
	// 	Bureaucrat	bob("bob", 1);
	// 	std::cout << bob << '\n';
	// 	bob.incrementGrade();
	// 	std::cout << bob << '\n';
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << "Error: " << e.what() << '\n';
	// }
	// try
	// {
	// 	Bureaucrat	harry("Harry", 250);
	// 	std::cout << harry << '\n';
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << "Error: " << e.what() << '\n';
	// }

	Bureaucrat ceo("ceo", 1);

	// ShrubberyCreationForm 	shrub("home");
	// PresidentialPardonForm	pres("elon musk");
	// RobotomyRequestForm		robot("wall-e");

	// ceo.signForm(shrub);
	// ceo.signForm(pres);
	// ceo.signForm(robot);

	// shrub.execute(ceo);

	// pres.execute(ceo);

	// robot.execute(ceo);

	Intern	someRandomIntern;
	Form*	rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	rrf->beSigned(ceo);

	rrf->execute(ceo);

	return 0;
}
