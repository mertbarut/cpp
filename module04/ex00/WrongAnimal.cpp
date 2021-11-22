/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:02:18 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/22 17:21:30 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <string>
#include <iostream>

WrongAnimal::WrongAnimal( void ) : _type("WRONG")
{
	std::cout << "A WrongAnimal has appeared!" << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "A WrongAnimal has disappeared!" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &obj )
{
	*this = obj;
	std::cout << "Copy constructor for class WrongAnimal is called!" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type )
{
	this->setType(type);
	std::cout << "Custom constructor for class WrongAnimal is called!" << std::endl;
}

WrongAnimal& WrongAnimal::operator= ( const WrongAnimal &obj )
{
	if (this != &obj)
		this->setType(obj.getType());
	std::cout << "Assignment operator overload for class WrongAnimal is used!" << std::endl;
	return (*this);
}

void WrongAnimal::makeSound( void ) const
{
	std::cout << " * WRONG ANIMAL SOUND * " << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
	return (this->_type);
}

void		WrongAnimal::setType( std::string type )
{
	this->_type = type;
}
