/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 16:38:34 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/19 11:01:40 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	try
	{
		Bureaucrat	boris("boris", 3);
		std::cout << boris << '\n';
		boris.incrementGrade();
		std::cout << boris << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	
	try
	{
		Bureaucrat	john("john", 150);
		std::cout << john << '\n';
		john.decrementGrade();
		std::cout << john << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	try
	{
		Bureaucrat	bob("bob", 1);
		std::cout << bob << '\n';
		bob.incrementGrade();
		std::cout << bob << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	try
	{
		Bureaucrat	harry("Harry", 250);
		std::cout << harry << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	std::cout << "\n\nEX01\n\n";

	Form	form("superimportantform", 10, 5);
	Bureaucrat	ceo("CEO", 11);

	std::cout << form << '\n';
	try
	{
		ceo.signForm(form);
	}
	catch(const std::exception& e)
	{
		std::cout << "Since the exception is already handled this won't print.\n";
	}
	ceo.incrementGrade();
	try
	{
		ceo.signForm(form);
	}
	catch(const std::exception& e)
	{
		std::cout << "This time the ceo has a high enough grade, thus it won't throw an exception and this also won't print\n";
	}
	std::cout << form << '\n';
	
	std::cout << '\n';

	try
	{
		Form	anotherform("anotherform", 12, 0);
		std::cout << form << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	return 0;
}
