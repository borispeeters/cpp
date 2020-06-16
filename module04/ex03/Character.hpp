/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/16 17:07:44 by bpeeters      #+#    #+#                 */
/*   Updated: 2020/06/16 17:22:53 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	Character();
	std::string	m_name;
	AMateria	*m_inventory[4];
public:
	Character(std::string const & name);
	virtual ~Character();
	Character(Character const & character);
	Character&	operator=(Character const & character);
	virtual std::string const &	getName() const;
	virtual void	equip(AMateria* m);
	virtual void	unequip(int idx);
	virtual void	use(int idx, ICharacter & target);
};

#endif
