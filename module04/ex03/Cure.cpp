/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:48:40 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/09 21:30:14 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>
#include <iostream>

Cure::Cure( void )
{
	this->_type = "cure";
	std::cout << "A Cure has appeared!" << std::endl;
}

Cure::~Cure( void )
{
	std::cout << "A Cure has disappeared!" << std::endl;
}

Cure::Cure(const Cure &obj)
{
	*this = obj;
	std::cout << "Copy constructor for class Cure is called!" << std::endl;
}

Cure& Cure::operator= ( const Cure &obj )
{
	if (this != &obj)
		this->_type = obj._type;
	std::cout << "Assignment operator overload for class Animal is used!" << std::endl;
	return (*this);
}

std::string	const & Cure::getType(void) const
{
	return (this->_type);
}

Cure* Cure::clone() const
{
	return (new Cure( *this ));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}