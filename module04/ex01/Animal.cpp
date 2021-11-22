/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:39:20 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/22 17:09:08 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <string>
#include <iostream>

Animal::Animal( void ) : _type("NULL")
{
	std::cout << "An Animal has appeared!" << std::endl;
}

Animal::~Animal( void )
{
	std::cout << "An Animal has disappeared!" << std::endl;
}

Animal::Animal(const Animal &obj)
{
	*this = obj;
	std::cout << "Copy constructor for class Animal is called!" << std::endl;
}

Animal::Animal(	std::string typeName )
{
	this->_type = typeName;
	std::cout << "Custom constructor for class Animal is called!" << std::endl;
}

Animal& Animal::operator= ( const Animal &obj )
{
	if (this != &obj)
		this->setType(obj.getType());
	std::cout << "Assignment operator overload for class Animal is used!" << std::endl;
	return (*this);
}

void Animal::makeSound( void ) const
{
	std::cout << " * UNSPECIFIED ANIMAL SOUND * " << std::endl;
}

std::string Animal::getType( void ) const
{
	return this->_type;
}

void		Animal::setType( std::string type )
{
	this->_type = type;
}
