/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:23:51 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/09 23:06:44 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>

enum	slot {
	empty,
	full
};

class Character : public ICharacter {

private:

	std::string	_name;
	AMateria*	_inventory[4];
	int			_slot[4];
	int			_count;

public:

	Character();
	~Character();
	Character( const Character &obj );
	Character( std::string const &name );
	Character& operator= ( const Character &obj );
	
	std::string const &getName() const; 
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

};

#endif