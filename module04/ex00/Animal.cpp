/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:39:20 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/08 16:11:46 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <string>
#include <iostream>

Animal::Animal( void ) : type("NULL")
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
	this->type = typeName;
	std::cout << "Custom constructor for class Animal is called!" << std::endl;
}

Animal& Animal::operator= ( const Animal &obj )
{
	if (this != &obj)
		*this = Animal(obj.type);
	std::cout << "Assignment operator overload for class Animal is used!" << std::endl;
	return (*this);
}

void Animal::makeSound( void ) const
{
	std::cout << " * UNSPECIFIED ANIMAL SOUND * " << std::endl;
}

std::string Animal::getType( void ) const
{
	return (this->type);
}
