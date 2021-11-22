/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:02:18 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/22 18:06:11 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

#include <string>
#include <iostream>

WrongCat::WrongCat( void )
{
	this->setType("Wrong felis catus");
	std::cout << "A WrongCat has appeared!" << std::endl;
}

WrongCat::~WrongCat( void )
{
	std::cout << "A WrongCat has disappeared!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj)
{
	*this = obj;
	std::cout << "Copy constructor for class WrongCat is called!" << std::endl;
}

WrongCat::WrongCat(	std::string type )
{
	this->setType( type );
	std::cout << "Custom constructor for class WrongCat is called!" << std::endl;
}

WrongCat& WrongCat::operator= ( const WrongCat &obj )
{
	if (this != &obj)
		this->setType(obj.getType());
	std::cout << "Assignment operator overload for class WrongCat is used!" << std::endl;
	return (*this);
}

void WrongCat::makeSound( void ) const
{
	std::cout << " * WRONG MEOW * " << std::endl;
}
