/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/05 23:15:38 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/07/07 14:15:44 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "identify.hpp"
#include <iostream>

int	main()
{
	Base	*base;
	
	for (int i = 0; i < 5; ++i)
	{
		std::cout << "Test " << i + 1 << '\n';
		base = generate();
		identify_from_pointer(base);
		identify_from_reference(*base);
		delete base;
	}
	return 0;
}
