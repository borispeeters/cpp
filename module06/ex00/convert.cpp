/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   convert.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/21 14:28:50 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/07/28 16:45:20 by bpeeters      ########   odam.nl         */
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

DATATYPE	detectType(std::string const & num, int & isneg)
{
	std::string::const_iterator it = num.begin();
	bool	isFloat = false;

	if (num.length() == 1 && !isdigit(*it))
		return CHAR;
	if (*it == '-')
	{
		isneg = -1;
		++it;
	}
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

void	print_pos_inf()
{
	std::cout << "char: impossible\n";	
	std::cout << "int: impossible\n";
	std::cout << "float: inff\n";
	std::cout << "double: inf\n";
}

void	print_neg_inf()
{
	std::cout << "char: impossible\n";	
	std::cout << "int: impossible\n";
	std::cout << "float: -inff\n";
	std::cout << "double: -inf\n";
}

void	print_nan()
{

	std::cout << "char: impossible\n";	
	std::cout << "int: impossible\n";
	std::cout << "float: nanf\n";
	std::cout << "double: nan\n";
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

	if (std::strcmp(argv[1], "nan") == 0 || std::strcmp(argv[1], "nanf") == 0)
	{
		print_nan();
		return (0);
	}
	if (std::strcmp(argv[1], "+inf") == 0 || std::strcmp(argv[1], "+inff") == 0
		|| std::strcmp(argv[1], "inf") == 0 || std::strcmp(argv[1], "inff") == 0)
	{
		print_pos_inf();
		return (0);
	}
	if (std::strcmp(argv[1], "-inf") == 0 || std::strcmp(argv[1], "-inff") == 0)
	{
		print_neg_inf();
		return (0);
	}

	int		isneg = 1;
	DATATYPE type = detectType(argv[1], isneg);
	double	myDouble(0.0);
	float	myFloat(0.0);
	int		myInt(0);
	char	myChar(0);


	std::cout << std::setprecision(1) << std::fixed;

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

	if (isprint(myChar))
		std::cout << "char: " << '\'' << myChar << '\'' << '\n';
	else
		std::cout << "char: Non displayable\n";
	
	std::cout << "int: " << myInt << '\n';
	std::cout << "float: " << myFloat << 'f' << '\n';
	std::cout << "double: " << myDouble << '\n';
	
	return 0;
}
