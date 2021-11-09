/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:23:54 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/09 23:06:32 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <string>
#include <iostream>

Character::Character( void )
{
	for (int i = 0; i < 4; i++)
		this->_slot[i] = slot::empty;
	this->_count = 0;
	this->_name = "NULL";
	std::cout << "A Character has appeared!" << std::endl;
}

Character::~Character( void )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_slot[i] == slot::full)
			delete this->_inventory[i];
	}
	std::cout << "A Character has disappeared!" << std::endl;
}

Character::Character(const Character &obj)
{
	for (int i = 0; i < 4; i++)
		this->_slot[i] = slot::empty;
	this->_count = 0;
	*this = obj;
	std::cout << "Copy constructor for class Character is called!" << std::endl;
}

Character::Character( std::string const &name )
{
	for (int i = 0; i < 4; i++)
		this->_slot[i] = slot::empty;
	this->_count = 0;
	this->_name = name;
	std::cout << "Custom constructor for class Character is called!" << std::endl;
}

Character& Character::operator= ( const Character &obj )
{
	if (this != &obj)
	{
		for (int i = 0; i < 4; i++)
		{
			this->_slot[i] = obj._slot[i];
			if (obj._slot[i] == slot::full)
				this->_inventory[i] = obj._inventory[i]->clone();
			this->_count = obj._count;
		}
	}
	std::cout << "Assignment operator overload for class Character is full!" << std::endl;
	return (*this);
}

std::string	const &Character::getName(void) const
{
	return (this->_name);
}

void  Character::equip(AMateria* m)
{
	if (this->_count < 4)
	{
		_slot[this->_count] = slot::full;
		_inventory[this->_count] = m->clone();
		this->_count++;
	}
}

void  Character::unequip(int idx)
{
	if (idx < 4 && _slot[idx] == slot::full)
	{
		_slot[idx] = slot::empty;
		this->_count = idx;
		delete _inventory[idx];
	}
}

void  Character::use(int idx, ICharacter& target)
{
	this->_inventory[idx]->use(target);
}
