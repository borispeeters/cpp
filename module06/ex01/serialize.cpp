/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   serialize.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/05 15:02:54 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/07/05 23:02:47 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "serialization.hpp"

void	*serialize(void)
{
	Data	*data = new Data();

	data->randomString1 = "12345678";
	data->randomInt = 42;
	data->randomString2 = "yoyayuye";

	return reinterpret_cast<void*>(data);
}
