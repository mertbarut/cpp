/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:48:40 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/09 21:50:54 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>
#include <iostream>

Ice::Ice( void )
{
	this->_type = "ice";
	std::cout << "An Ice has appeared!" << std::endl;
}

Ice::~Ice( void )
{
	std::cout << "An Ice has disappeared!" << std::endl;
}

Ice::Ice( const Ice &obj )
{
	*this = obj;
	std::cout << "Copy constructor for Ice is called!" << std::endl;
}

Ice& Ice::operator= ( const Ice &obj )
{
	if (this != &obj)
		this->_type = obj._type;
	std::cout << "Assignment operator overload for Ice is used!" << std::endl;
	return (*this);
}

std::string const & Ice::getType( void ) const
{
	return (this->_type);
}

AMateria* Ice::clone() const
{
	return (new Ice( *this ));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}
