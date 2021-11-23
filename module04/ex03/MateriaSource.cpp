/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:59:16 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/23 15:37:00 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <string>
#include <iostream>

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->setSlotStatus(i, unused);
	this->setCount(0);
	std::cout << "A Materia Source has appeared!" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_status[i] == used)
			delete this->_inventory[i];
	}
	std::cout << "A Materia Source has disappeared!" << std::endl;
}

MateriaSource::MateriaSource( MateriaSource const &obj )
{
	this->setCount(obj.getCount());
	for (int i = 0; i < 4; i++)
		this->setSlotStatus(i, obj.getSlotStatus(i));
	for (int i = 0; i < 4; i++)
		this->setMateria(i, obj.getMateria(i)->clone());
	std::cout << "Copy constructor for class Materia Source is called!" << std::endl;
}

MateriaSource& MateriaSource::operator= ( MateriaSource const &obj )
{
	if (this != &obj)
	{
		this->setCount(obj.getCount());
		for (int i = 0; i < 4; i++)
		{
			this->setSlotStatus(i, obj.getSlotStatus(i));
			if (obj.getSlotStatus(i) == used)
				this->setMateria(i, obj.getMateria(i)->clone());
		}
	}
	std::cout << "Assignment operator overload for class Materia Source is called!" << std::endl;
	return (*this);
}

void MateriaSource::learnMateria( AMateria* m )
{
	if (this->getCount() < 4)
	{
		this->setSlotStatus(this->getCount(), used);
		this->setMateria(this->getCount(), m->clone());
		this->setCount(this->getCount() + 1);
	}
}

AMateria* MateriaSource::createMateria( std::string const &type )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->getMateria(i)->getType() == type)
			return (this->getMateria(i)->clone());
	}
	return (0);
}

AMateria*	MateriaSource::getMateria( int index ) const
{
	if (index <= 3 && index >= 0)
		return this->_inventory[index];
	else
		return NULL;
}

int			MateriaSource::getSlotStatus( int index ) const
{
	if (index <= 3 && index >= 0)
		return this->_status[index];
	else
		return -1;
}

int			MateriaSource::getCount() const
{
	return this->_count;
}

void		MateriaSource::setMateria( int index, AMateria* materia )
{
	if (index <= 3 && index >= 0)
		this->_inventory[index] = materia;
	else
		std::cout << "Given index is out of bounds" << std::endl;
}

void		MateriaSource::setSlotStatus( int index, int status )
{
	if (index <= 3 && index >= 0)
		this->_status[index] = status;
	else
		std::cout << "Given index is out of bounds" << std::endl;
}

void		MateriaSource::setCount( int count )
{
	if (count <= 4 && count >= 0)
		this->_count = count;
	else
		std::cout << "Given count is out of bounds" << std::endl;
}