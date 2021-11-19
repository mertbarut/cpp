/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:52:28 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/19 16:06:23 by mbarut           ###   ########.fr       */
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

ClapTrap::ClapTrap( const ClapTrap &obj )
{
	*this = obj;
	//std::cout << "Copy constructor is called!" << std::endl;
}

ClapTrap::ClapTrap(	std::string Name, unsigned int Hitpoints, unsigned int Energypoints, unsigned int Attackdamage )
{
	this->setName(Name);
	this->setHitpoints(Hitpoints);
	this->setEnergypoints(Energypoints);
	this->setAttackdamage(Attackdamage);
	std::cout << "Custom constructor is called!" << std::endl;
}

ClapTrap& ClapTrap::operator= ( const ClapTrap &obj )
{
	if (this != &obj)
		*this = ClapTrap(obj.getName(), obj.getHitpoints(), obj.getEnergypoints(), obj.getAttackdamage());
	//std::cout << "Assignment operator overload attempted!" << std::endl;
	return (*this);
}

std::string		ClapTrap::getName( void ) const
{
	return this->_Name;
}

unsigned int	ClapTrap::getHitpoints( void ) const
{
	return this->_Hitpoints;
}

unsigned int	ClapTrap::getEnergypoints( void ) const
{
	return this->_Energypoints;
}

unsigned int	ClapTrap::getAttackdamage( void ) const
{
	return this->_Attackdamage;
}

void			ClapTrap::setName( std::string Name )
{
	this->_Name = Name;
}

void			ClapTrap::setHitpoints( unsigned int Hitpoints )
{
	this->_Hitpoints = Hitpoints;
}

void			ClapTrap::setEnergypoints( unsigned int Energypoints )
{
	this->_Energypoints = Energypoints;
}

void			ClapTrap::setAttackdamage( unsigned int Attackdamage )
{
	this->_Attackdamage = Attackdamage;
}

void ClapTrap::attack( std::string const &target )
{
	std::cout << "Claptrap " << this->getName() << RED " attack " RESET << target << ", causing " << this->getAttackdamage() << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << "Claptrap " << this->getName() << " has taken " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount )
{
	std::cout << "Claptrap " << this->getName() << " has " << GREEN "repaired " RESET << amount << " points of damage!" << std::endl;
}
