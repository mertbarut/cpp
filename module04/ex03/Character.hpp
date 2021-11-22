/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:23:51 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/22 20:55:52 by mbarut           ###   ########.fr       */
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

	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

	std::string	const &getName() const ;
	AMateria*	getMateria( int index ) const ;
	int			getSlotStatus( int index ) const ;
	int			getCount() const ;
	void		setName( std::string name );
	void		setMateria( int index, AMateria* inventory );
	void		setSlotStatus( int index, int status );
	void		setCount( int count );

};

#endif