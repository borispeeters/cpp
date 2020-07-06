/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   serialization.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/05 15:03:49 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/07/05 15:33:20 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <string>

struct	Data
{
	std::string	randomString1;
	int			randomInt;
	std::string	randomString2;
};

void	*serialize(void);
Data	*deserialize(void *raw);

#endif
