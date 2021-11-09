/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:39:28 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/08 21:09:22 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <string>
#include <iostream>

Dog::Dog( void )
{
	Animal::type = "Canis lupus familiaris";
	std::cout << "A Dog has appeared!" << std::endl;
	Dog::brain = new Brain;
}

Dog::~Dog( void )
{
	delete brain;
	std::cout << "An Dog has disappeared!" << std::endl;
}

Dog::Dog( const Dog &obj )
{
	*this = obj;
	std::cout << "Copy constructor for class Dog is called!" << std::endl;
}

Dog::Dog( std::string typeName )
{
	this->type = typeName;
	std::cout << "Custom constructor for class Dog is called!" << std::endl;
}

Dog& Dog::operator= ( const Dog &obj )
{
	if (this != &obj)
	{
		this->type = obj.type;
		this->brain = new Brain(*obj.brain);
	}
	std::cout << "Assignment operator overload for class Dog is used!" << std::endl;
	return (*this);
}

void Dog::makeSound( void ) const
{
	std::cout << " * BARK * " << std::endl;
}

std::string Dog::getType( void ) const
{
	return (this->type);
}
