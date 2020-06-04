/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/17 08:27:23 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/04/17 08:37:12 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <string>

class Victim
{
private:
	Victim();
public:
	Victim(const std::string &name);
	Victim(const Victim &victim);
	~Victim();
	Victim&		operator=(const Victim &victim);
	std::string	getName() const;
	void 		getPolymorphed() const;
private:
	std::string	m_name;
};

std::ostream& operator<<(std::ostream &out, const Victim &victim);

#endif
