/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/27 16:34:34 by bpeeters       #+#    #+#                */
/*   Updated: 2020/03/28 22:29:08 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < argc; ++i)
		for (int j = 0; argv[i][j]; ++j)
			std::cout << static_cast<char>(toupper(argv[i][j]));
	std::cout << std::endl;
	return (0);
}
