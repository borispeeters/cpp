/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 19:58:24 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/29 16:24:10 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include "ShrubberyCreationForm.hpp"


#include <iostream>


ShrubberyCreationForm::ErrorOpenFileException::ErrorOpenFileException():
	runtime_error("error opening file")
{
}

ShrubberyCreationForm::ErrorOpenFileException::~ErrorOpenFileException() throw()
{
}

ShrubberyCreationForm::ShrubberyCreationForm():
	Form("shrubbery creation", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target):
	Form("shrubbery creation", 145, 137),
	m_target(target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & shrubbery):
	Form("shrubbery creation", 145, 137, shrubbery.getSigned()),
	m_target(shrubbery.m_target)
{
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & shrubbery)
{
	Form::operator=(shrubbery);
	if (&shrubbery != this)
	{
		m_target = shrubbery.m_target;
	}
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);

	std::string		fileName(m_target + "_shrubbery");
	std::ofstream	outf(fileName.c_str(), std::ios::trunc);

	if (!outf)
	{
		throw ErrorOpenFileException();
	}


	outf << "                                                         ." << '\n';
	outf << "                                              .         ;  " << '\n';
	outf << "                 .              .              ;%     ;;   " << '\n';
	outf << "                   ,           ,                :;%  %;   " << '\n';
	outf << "                    :         ;                   :;%;'     .,   " << '\n';
	outf << "           ,.        %;     %;            ;        %;'    ,;" << '\n';
	outf << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << '\n';
	outf << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << '\n';
	outf << "               ;%;      %;        ;%;        % ;%;  ,%;'" << '\n';
	outf << "                `%;.     ;%;     %;'         `;%%;.%;'" << '\n';
	outf << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << '\n';
	outf << "                    `:%;.  :;bd%;          %;@%;'" << '\n';
	outf << "                      `@%:.  :;%.         ;@@%;'   " << '\n';
	outf << "                        `@%.  `;@%.      ;@@%;         " << '\n';
	outf << "                          `@%%. `@%%    ;@@%;        " << '\n';
	outf << "                            ;@%. :@%%  %@@%;       " << '\n';
	outf << "                              %@bd%%%bd%%:;     " << '\n';
	outf << "                                #@%%%%%:;;" << '\n';
	outf << "                                %@@%%%::;" << '\n';
	outf << "                                %@@@%(o);  . '         " << '\n';
	outf << "                                %@@@o%;:(.,'         " << '\n';
	outf << "                            `.. %@@@o%::;         " << '\n';
	outf << "                               `)@@@o%::;         " << '\n';
	outf << "                                %@@(o)::;        " << '\n';
	outf << "                               .%@@@@%::;         " << '\n';
	outf << "                               ;%@@@@%::;.          " << '\n';
	outf << "                              ;%@@@@%%:;;;. " << '\n';
	outf << "                          ...;%@@@@@%%:;;;;,.." << '\n';
}

Form*	ShrubberyCreationForm::clone() const
{
	ShrubberyCreationForm	*ret = new ShrubberyCreationForm(*this);
	return ret;
}
