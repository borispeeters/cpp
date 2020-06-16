/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/15 19:15:14 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/15 19:21:39 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>

class AMateria
{
private:
	AMateria();
	std::string		m_type;
	unsigned int	m_xp;
public:
	AMateria(std::string const & type);
	virtual ~AMateria();
	AMateria(AMateria const & amateria);
	AMateria&	operator=(AMateria const & amateria);
	std::string const &	getType() const;
	unsigned int		getXP() const;
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter & target);
};

#endif
