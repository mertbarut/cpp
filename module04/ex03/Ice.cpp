/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:48:40 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/22 20:38:47 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>
#include <iostream>

Ice::Ice( void )
{
	this->setType("ice");
	std::cout << "An Ice Materia has appeared!" << std::endl;
}

Ice::~Ice( void )
{
	std::cout << "An Ice Materia has disappeared!" << std::endl;
}

Ice::Ice( const Ice &obj )
{
	*this = obj;
	std::cout << "Copy constructor for Ice Materia is called!" << std::endl;
}

Ice& Ice::operator= ( const Ice &obj )
{
	if (this != &obj)
		this->setType(obj.getType()); /* I know it does not make sense */
	std::cout << "Assignment operator overload for Ice Materia is used!" << std::endl;
	return (*this);
}

std::string const & Ice::getType( void ) const
{
	return (this->_type);
}

void		Ice::setType( std::string type )
{
	this->_type = type;
}

AMateria* Ice::clone() const
{
	return (new Ice( *this ));
}

void Ice::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}
