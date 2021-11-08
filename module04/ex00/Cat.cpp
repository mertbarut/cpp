/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:39:24 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/08 16:48:13 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include <string>
#include <iostream>

Cat::Cat( void )
{
	Animal::type = "Felis catus";
	std::cout << "A Cat has appeared!" << std::endl;
}

Cat::~Cat( void )
{
	std::cout << "An Cat has disappeared!" << std::endl;
}

Cat::Cat(const Cat &obj)
{
	*this = obj;
	std::cout << "Copy constructor for class Cat is called!" << std::endl;
}

Cat::Cat(	std::string typeName )
{
	this->type = typeName;
	std::cout << "Custom constructor for class Cat is called!" << std::endl;
}

Cat& Cat::operator= ( const Cat &obj )
{
	if (this != &obj)
		*this = Cat(obj.type);
	std::cout << "Assignment operator overload for class Cat is used!" << std::endl;
	return (*this);
}

void Cat::makeSound( void ) const
{
	std::cout << " * MEOW * " << std::endl;
}

std::string Cat::getType( void ) const
{
	return (this->type);
}
