/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:23:54 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/22 22:02:05 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <string>
#include <iostream>

Character::Character( void )
{
	this->setName("No one");
	this->setCount(0);
	for (int i = 0; i < 4; i++)
		this->setSlotStatus(i, slot::empty);
	for (int i = 0; i < 4; i++)
		this->setMateria(i, NULL);
	std::cout << "A Character has appeared!" << std::endl;
}

Character::~Character( void )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->getSlotStatus(i) == slot::full)
			delete this->getMateria(i);
	}
	std::cout << "A Character has disappeared!" << std::endl;
}

Character::Character(const Character &obj)
{
	this->setName(obj.getName());
	this->setCount(obj.getCount());
	for (int i = 0; i < 4; i++)
		this->setSlotStatus(i, obj.getSlotStatus(i));
	for (int i = 0; i < 4; i++)
		this->setMateria(i, obj.getMateria(i)->clone());
	std::cout << "Copy constructor for class Character is called!" << std::endl;
}

Character::Character( std::string const &name )
{
	this->setName(name);
	this->setCount(0);
	for (int i = 0; i < 4; i++)
		this->setSlotStatus(i, slot::empty);
	for (int i = 0; i < 4; i++)
		this->setMateria(i, NULL);
	std::cout << "Custom constructor for class Character is called!" << std::endl;
}

Character& Character::operator= ( const Character &obj )
{
	if (this != &obj)
	{
		this->setName(obj.getName());
		this->setCount(obj.getCount());
		for (int i = 0; i < 4; i++)
		{
			this->setSlotStatus(i, obj.getSlotStatus(i));
			if (obj.getSlotStatus(i) == slot::full)
				this->setMateria(i, obj.getMateria(i)->clone());
		}
	}
	std::cout << "Assignment operator overload for class Character is called!" << std::endl;
	return (*this);
}

std::string	const &Character::getName(void) const
{
	return this->_name;
}

AMateria*	Character::getMateria( int index ) const
{
	if (index <= 3 && index >= 0)
		return this->_inventory[index];
	else
		return NULL;
}

int			Character::getSlotStatus( int index ) const
{
	if (index <= 3 && index >= 0)
		return this->_slot[index];
	else
		return -1;
}

int			Character::getCount() const
{
	return this->_count;
}

void		Character::setName( std::string name )
{
	this->_name = name;
}

void		Character::setMateria( int index, AMateria* materia )
{
	if (index <= 3 && index >= 0)
		this->_inventory[index] = materia;
	else
		std::cout << "Given index is out of bounds" << std::endl;
}

void		Character::setSlotStatus( int index, int status )
{
	if (index <= 3 && index >= 0)
		this->_slot[index] = status;
	else
		std::cout << "Given index is out of bounds" << std::endl;
}

void		Character::setCount( int count )
{
	if (count <= 4 && count >= 0)
		this->_count = count;
	else
		std::cout << "Given count is out of bounds" << std::endl;
}

void  Character::equip(AMateria* materia)
{
	if (this->getCount() < 4)
	{
		this->setSlotStatus(this->getCount(), slot::full); 
		this->setMateria(this->getCount(), materia->clone());
		this->setCount(this->getCount() + 1);
	}
}

void  Character::unequip(int idx)
{
	if ( idx < 4 && this->getSlotStatus(idx) == slot::full )
	{
		this->setSlotStatus(idx, slot::empty);
		this->setCount(this->getCount() - 1);
	}
}

void  Character::use(int idx, ICharacter& target)
{
	this->getMateria(idx)->use(target);
}
