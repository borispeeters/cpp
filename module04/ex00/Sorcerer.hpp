/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/17 08:05:53 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/04/17 08:30:36 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>

class Sorcerer
{
private:
	Sorcerer();
public:
	Sorcerer(const std::string &name, const std::string &title);
	Sorcerer(const Sorcerer &sorc);
	~Sorcerer();
	Sorcerer&	operator=(const Sorcerer &sorc);
	std::string	getName() const;
	std::string	getTitle() const;
private:
	std::string	m_name;
	std::string	m_title;
};

std::ostream& operator<<(std::ostream &out, const Sorcerer &sorc);

#endif
