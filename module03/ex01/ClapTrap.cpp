/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:52:28 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/07 23:00:08 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap( void ) : _Name("NULL"), _Hitpoints(0), _Energypoints(0), _Attackdamage(0)
{
	std::cout << "A Claptrap has appeared!" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "A Claptrap has disappeared!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	*this = obj;
	std::cout << "Copy constructor is called!" << std::endl;
}

ClapTrap::ClapTrap(	std::string Name, unsigned int Hitpoints, unsigned int Energypoints, unsigned int Attackdamage )
{
	this->_Name = Name;
	this->_Hitpoints = Hitpoints;
	this->_Energypoints = Energypoints;
	this->_Attackdamage = Attackdamage;
	std::cout << "Custom constructor is called!" << std::endl;
}

ClapTrap& ClapTrap::operator= ( const ClapTrap &obj )
{
	if (this != &obj)
		*this = ClapTrap(obj._Name, obj._Hitpoints, obj._Energypoints, obj._Attackdamage);
	std::cout << "Assignment operator overload attempted!" << std::endl;
	return (*this);
}

void ClapTrap::attack( std::string const &target)
{
	std::cout << "Claptrap " << this->_Name << " attack " << target << ", causing " << this->_Attackdamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "Claptrap " << this->_Name << " has taken " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "Claptrap " << this->_Name << " has repaired " << amount << " points of damage!" << std::endl;
}
