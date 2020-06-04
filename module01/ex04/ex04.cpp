/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/31 22:54:16 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/04/08 01:04:57 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string	brain("HI THIS IS BRAIN");
	std::string *ptr(&brain);
	std::string	&ref(brain);

	std::cout << "Pointer to the string: " << *ptr << std::endl;
	std::cout << "Reference to the string: " << ref << std::endl;
	return 0;
}
