/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   replace.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/01 02:22:25 by bpeeters       #+#    #+#                */
/*   Updated: 2020/04/01 03:58:34 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include "replace.hpp"

void		replace(std::string &str, const std::string &s1, const std::string &s2)
{
	std::size_t	found = str.find(s1);
	
	while (found != std::string::npos)
	{
		str.replace(found, s1.length(), s2);
		found = str.find(s1, found + 1);
	}
}

ErrorCode	transferFile(const std::string &originalFile, const std::string &s1, const std::string &s2)
{
	std::ifstream	inf(originalFile.c_str());
	std::string		newFile(originalFile + ".replace");
	std::ofstream	outf(newFile.c_str(), std::ios::trunc);

	if (!inf | !outf)
	{
		std::cerr << "Error opening file\n";
		return ERROR;
	}
	while (true)
	{
		std::string	str;
		std::getline(inf, str);
		if (!inf)
			break ;
		if (inf.fail())
		{
			std::cerr << "Error reading line\n";
			return ERROR;
		}
		if(!inf.eof())
			str.push_back('\n');
		replace(str, s1, s2);
		outf << str;
	}
	return SUCCESS;
}

int			main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Invalid number of arguments\n";
		return 1;
	}
	if (transferFile(argv[1], argv[2], argv[3]) == ERROR)
		return 1;
	return 0;
}
