/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   eval_expr.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/02 21:42:29 by bpeeters       #+#    #+#                */
/*   Updated: 2020/04/02 22:56:54 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <sstream>
#include <string>
#include "Fixed.hpp"

void	eval_expr(const std::string& expr)
{
	std::ostringstream	stringStream;

	// char	c;
	stringStream << expr;
	while (stringStream)
	{
		if (true)
		{
			// int	num;
			std::cout << stringStream.str();
			// std::cout << "num: " << num << std::endl;
		}
		else
		{
			std::cout << stringStream.str();
			// std::cout << "c: " << c << std::endl;
		}
		// std::cout << stringStream. << std::endl;
	}
	std::cout << std::endl;
	
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		eval_expr(argv[1]);
	}
	return 0;
}
