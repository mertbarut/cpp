/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:48:40 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/09 21:19:17 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <string>
#include <iostream>

AMateria::AMateria( void )
{
	this->_type = "NULL";
	std::cout << "An AMateria has appeared!" << std::endl;
}

AMateria::~AMateria( void )
{
	std::cout << "An AMateria has disappeared!" << std::endl;
}

AMateria::AMateria(const AMateria &obj)
{
	*this = obj;
	std::cout << "Copy constructor for class AMateria is called!" << std::endl;
}

AMateria::AMateria(	std::string const &type )
{
	this->_type = type;
	std::cout << "Custom constructor for class AMateria is called!" << std::endl;
}

AMateria& AMateria::operator= ( const AMateria &obj )
{
	if (this != &obj)
		this->_type = obj._type;
	std::cout << "Assignment operator overload for class Animal is used!" << std::endl;
	return (*this);
}

std::string	const &AMateria::getType(void) const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	(void)target; /* -Werror */
}