/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/01 04:06:53 by bpeeters       #+#    #+#                */
/*   Updated: 2020/04/01 04:22:14 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <string>

class Human
{
private:
	void	meleeAttack(std::string const & target);
	void	rangedAttack(std::string const & target);
	void	intimidatingShout(std::string const & target);
public:
	void	action(std::string const & action_name, std::string const & target);
};

#endif
