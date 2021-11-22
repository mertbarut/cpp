/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:39:28 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/22 17:14:32 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include <string>
#include <iostream>

Dog::Dog( void )
{
	this->setType( "Canis lupus familiaris" );
	std::cout << "A Dog has appeared!" << std::endl;
}

Dog::~Dog( void )
{
	std::cout << "A Dog has disappeared!" << std::endl;
}

Dog::Dog(const Dog &obj)
{
	*this = obj;
	std::cout << "Copy constructor for class Dog is called!" << std::endl;
}

Dog::Dog( std::string type )
{
	this->setType( type );
	std::cout << "Custom constructor for class Dog is called!" << std::endl;
}

Dog& Dog::operator= ( const Dog &obj )
{
	if (this != &obj)
		this->setType(obj.getType());
	std::cout << "Assignment operator overload for class Dog is used!" << std::endl;
	return (*this);
}

void Dog::makeSound( void ) const
{
	std::cout << " * BARK BARK * " << std::endl;
}
