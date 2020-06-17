/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/15 19:15:14 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/17 08:36:32 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include "ICharacter.hpp"

class AMateria
{
protected:
	std::string		m_type;
	unsigned int	m_xp;
private:
	AMateria();
public:
	AMateria(std::string const & type);
	virtual ~AMateria();
	AMateria(AMateria const & amateria);
	AMateria&	operator=(AMateria const & amateria);
	std::string const &	getType() const; //Returns the materia type
	unsigned int		getXP() const; //Returns the materia's XP
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter & target);
};

#endif
