/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/10 21:51:33 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/07/11 14:49:45 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Array.hpp"

int	main()
{
	Array<int>	arr(5);

	// test for zero initialization
	for (int i = 0; i < 5; ++i)
	{
		std::cout << arr[i] << '\n';
	}

	std::cout << '\n';

	arr[0] = 3;
	for (int i = 1; i < 5; ++i)
	{
		arr[i] = ((arr[i - 1] * 3) + 2) / 2;
		std::cout << arr[i] << '\n';
	}
	std::cout << "size: " << arr.size() << '\n';

	std::cout << '\n';

	Array<double>	dbl(9);

	dbl[0] = 4.2;
	for (int i = 1; i < 9; ++i)
	{
		dbl[i] = dbl[i - 1] / 2.5 + 10.4;
		std::cout << dbl[i] << '\n';
	}
	std::cout << "size: " << dbl.size() << '\n';

	std::cout << '\n';

	const Array<float>	flt(3);

	for (int i = 0; i < 3; ++i)
	{
		// flt[i] = 4.2; // COMPILE ERROR
		std::cout << flt[i] << '\n';
	}
	std::cout << "size: " << flt.size() << '\n';

	std::cout << '\n';

	Array<int>	empty;

	try
	{
		std::cout << empty[0] << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << "we in the catch block now\n";
	}
	std::cout << "size: " << empty.size() << '\n';

	std::cout << '\n';

	Array<std::string>	str(2);

	str[0] = "Hello";
	str[1] = "World!";

	std::cout << str[0] << ' ' << str[1] << '\n';

	std::cout << '\n';

	Array<double>	x(3);

	for (int i = 0; i < 3; ++i)
	{
		x[i] = i + 0.5;
		std::cout << "x: " << x[i] << '\n';
	}

	Array<double>	y(x);

	std::cout << "size of y after x copy: " << y.size() << '\n';
	for (int i = 0; i < 3; ++i)
	{
		y[i] = y[i] + 0.3;
		x[i] = y[i]++;
		std::cout << "x: " << x[i] << ", y: " << y[i] << '\n';
	}

	return 0;
}
