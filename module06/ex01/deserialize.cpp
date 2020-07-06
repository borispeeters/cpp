/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   deserialize.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/05 15:35:18 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/07/05 22:59:59 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

Data	*deserialize(void *raw)
{
	Data	*data = new Data();
	Data	*rawData = reinterpret_cast<Data*>(raw);
	
	data->randomString1 = rawData->randomString1;
	data->randomInt = rawData->randomInt;
	data->randomString2 = rawData->randomString2;
	return data;
}
