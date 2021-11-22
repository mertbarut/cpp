/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:39:24 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/22 20:03:03 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include <string>
#include <iostream>

Cat::Cat( void )
{
	this->setType( "Felis catus" );
	this->setBrain( new Brain );
	std::cout << "A Cat has appeared!" << std::endl;
}

Cat::~Cat( void )
{
	delete this->getBrain();
	std::cout << "A Cat has disappeared!" << std::endl;
}

Cat::Cat(const Cat &obj)
{
	this->setType(obj.getType());
	this->setBrain( new Brain );
	for (int i = 0; i < 100; i++)
		this->getBrain()->setIdea(i, obj.getBrain()->getIdea(i));
	std::cout << "Copy constructor for class Cat is called!" << std::endl;
}

Cat::Cat( std::string type )
{
	this->setType( type );
	std::cout << "Custom constructor for class Cat is called!" << std::endl;
}

Cat& Cat::operator= ( const Cat &obj )
{
	if (this != &obj)
	{
		this->setType(obj.getType());
		this->setBrain( new Brain );
		for (int i = 0; i < 100; i++)
			this->getBrain()->setIdea(i, obj.getBrain()->getIdea(i));
	}	
	std::cout << "Assignment operator overload for class Cat is used!" << std::endl;
	return (*this);
}

void Cat::makeSound( void ) const
{
	std::cout << " * MEOW * " << std::endl;
}

Brain*	Cat::getBrain( void ) const
{
	return this->_brain;
}

void	Cat::setBrain( Brain* brain )
{
	this->_brain = brain;
}
