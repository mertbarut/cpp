/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:59:16 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/09 22:58:05 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <string>
#include <iostream>

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_status[i] = status::unused;
	this->_count = 0;
	std::cout << "A Materia Source has appeared!" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_status[i] == status::used)
			delete this->_inventory[i];
	}
	std::cout << "A Materia Source has disappeared!" << std::endl;
}

MateriaSource::MateriaSource( MateriaSource const &obj )
{
	for (int i = 0; i < 4; i++)
		this->_status[i] = status::unused;
	this->_count = 0;
	*this = obj;
	std::cout << "Copy constructor for class Materia Source is called!" << std::endl;
}

MateriaSource& MateriaSource::operator= ( MateriaSource const &obj )
{
	if (this != &obj)
	{
		for (int i = 0; i < 4; i++)
		{
			this->_status[i] = obj._status[i];
			if (obj._status[i] == status::used)
				this->_inventory[i] = obj._inventory[i]->clone();
			this->_count = obj._count;
		}
	}
	std::cout << "Assignment operator overload for class Materia Source is called!" << std::endl;
	return (*this);
}

void MateriaSource::learnMateria( AMateria* m )
{
	if (this->_count < 4)
	{
		_status[this->_count] = status::used;
		_inventory[this->_count] = m->clone();
		this->_count++;
	}
}

AMateria* MateriaSource::createMateria( std::string const &type )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i]->getType() == type)
			return (this->_inventory[i]->clone());
	}
	return (0);
}