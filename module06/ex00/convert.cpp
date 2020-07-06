/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   convert.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/21 14:28:50 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/07/05 11:29:26 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iomanip>
#include <iostream>
#include <sstream>
#include "convert.hpp"

void	checkArguments(int argc, char *argv)
{
	if (argc <= 1 || argc >= 3)
	{
		if (argv)
			std::cerr << "Usage: " << argv << " <number>\n";
		else
			std::cerr << "Usage: <program name> <number>\n";
		throw std::exception();
	}
}


DATATYPE	detectType(std::string const & num)
{
	std::string::const_iterator it = num.begin();
	bool	isFloat = false;

	if (num.length() == 1 && !isdigit(*it))
		return CHAR;
	while (it != num.end())
	{
		if (*it == '.')
		{
			if (isFloat)
				return ERR;
			isFloat = true;
			++it;
			continue ;
		}
		if (!isdigit(*it) && *it != 'f')
			return ERR;
		++it;
	}
	if (isFloat)
	{
		if (*(it - 1) == 'f')
			return FLOAT;
		return DOUBLE;
	}
	return INT;
}

int		main(int argc, char **argv)
{
	try
	{
		checkArguments(argc, argv[0]);
	}
	catch(const std::exception & e)
	{
		return 1;
	}

	DATATYPE type = detectType(argv[1]);
	std::stringstream convert(argv[1]);
	double	myDouble(0.0);
	float	myFloat(0.0);
	int		myInt(0);
	char	myChar(0);

	switch (type)
	{
	case CHAR:
		std::cout << "The type is char!\n";
		myChar = argv[1][0];
		myInt = static_cast<int>(myChar);
		myFloat = static_cast<float>(myChar);
		myDouble = static_cast<double>(myChar);
		break;
	case INT:
		std::cout << "The type is int!\n";
		myInt = std::atoi(argv[1]);
		myChar = static_cast<char>(myInt);
		myFloat = static_cast<float>(myInt);
		myDouble = static_cast<double>(myInt);
		break;
	case FLOAT:
		std::cout << "The type is float!\n";
		myFloat = std::atof(argv[1]);
		myChar = static_cast<char>(myFloat);
		myInt = static_cast<int>(myFloat);
		myDouble = static_cast<double>(myFloat);
		break;
	case DOUBLE:
		std::cout << "The type is double!\n";
		myDouble = std::atof(argv[1]);
		myChar = static_cast<char>(myDouble);
		myInt = static_cast<int>(myDouble);
		myFloat = static_cast<float>(myDouble);
		break;
	default:
		break;
	}

	std::cout << std::showpoint << std::setprecision(3);
	std::cout << "Char: " << '\'' << myChar << '\'' << '\n';
	std::cout << "Int: " << myInt << '\n';
	std::cout << "Float: " << myFloat << 'f' << '\n';
	std::cout << "Double: " << myDouble << '\n';

	std::cout << "nan: " << 0.0/0.0 << '\n';
	
	return 0;
}
