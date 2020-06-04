/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/30 13:17:12 by bpeeters       #+#    #+#                */
/*   Updated: 2020/03/30 13:22:39 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "contact.hpp"

std::string		readCommand(std::string &command)
{
	std::cout << "Enter a valid command (add, search or exit): ";
	std::getline(std::cin, command);
	for (int i = 0; command[i]; ++i)
		command[i] = static_cast<char>(tolower(command[i]));
	return command;
}

void			displayPhonebook(Contact contacts[8], int i)
{
	int	index;

	std::cout << "     index|first name| last name|  nickname\n";
	for (int j = 0; j < i; ++j)
	{
		std::cout << "----------|----------|----------|----------\n";
		contacts[j].displayInfo(j);
	}

	std::cout << "Enter the index of the contact you'd like to view: ";
	std::cin >> index;
	if (std::cin.fail())
		std::cin.clear();
	std::cin.ignore(32767, '\n');
	std::cout << index << std::endl;
	if (index >= i)
	{
		std::cout << "That contact doesn't exist (yet).\n";
		return ;
	}
	contacts[index].printFields();
}

int 			main()
{
	Contact		contacts[8];
	std::string	command;
	int			index(0);

	while (true)
	{
		command.clear();
		readCommand(command);
		if (command == "exit")
			return 0;
		else if (command == "add" && index >= 8)
			std::cout << "Phonebook already contains 8 contacts, cannot add another member.\n";
		else if (command == "add")
			contacts[index++].addContact();
		else if (command == "search")
			displayPhonebook(contacts, index);
	}
	return 0;
}
