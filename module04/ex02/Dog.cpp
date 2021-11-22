/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:39:28 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/22 20:01:58 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include <string>
#include <iostream>

Dog::Dog( void )
{
	this->setType( "Canis lupus familiaris" );
	this->setBrain( new Brain );
	std::cout << "A Dog has appeared!" << std::endl;
}

Dog::~Dog( void )
{
	delete this->getBrain();
	std::cout << "A Dog has disappeared!" << std::endl;
}

Dog::Dog(const Dog &obj)
{
	this->setType(obj.getType());
	this->setBrain( new Brain );
	for (int i = 0; i < 100; i++)
		this->getBrain()->setIdea(i, obj.getBrain()->getIdea(i));
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
	{
		this->setType(obj.getType());
		this->setBrain( new Brain );
		for (int i = 0; i < 100; i++)
			this->getBrain()->setIdea(i, obj.getBrain()->getIdea(i));
	}
	std::cout << "Assignment operator overload for class Dog is used!" << std::endl;
	return (*this);
}

void Dog::makeSound( void ) const
{
	std::cout << " * BARK BARK * " << std::endl;
}

Brain*	Dog::getBrain( void ) const
{
	return this->_brain;
}

void	Dog::setBrain( Brain* brain )
{
	this->_brain = brain;
}
