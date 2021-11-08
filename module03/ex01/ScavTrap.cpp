/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 19:03:07 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/07 20:15:06 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap( void )
{
	this->_Name = "NULL";
	this->_Hitpoints = 100;
	this->_Energypoints = 50;
	this->_Attackdamage = 20;
	std::cout << "A ScavTrap has appeared!" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "A ScavTrap has disappeared!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj): ClapTrap(obj._Name, 100, 50, 20)
{
	*this = obj;
	std::cout << "Copy constructor for ScavTrap is called!" << std::endl;
}

ScavTrap::ScavTrap(	std::string Name, unsigned int Hitpoints, unsigned int Energypoints, unsigned int Attackdamage )
{
	this->_Name = Name;
	this->_Hitpoints = Hitpoints;
	this->_Energypoints = Energypoints;
	this->_Attackdamage = Attackdamage;
	std::cout << "Custom constructor for ScavTrap is called!" << std::endl;
}

ScavTrap& ScavTrap::operator= ( const ScavTrap &obj )
{
	if (this != &obj)
	{
		this->_Attackdamage = obj._Attackdamage;
		this->_Energypoints = obj._Energypoints;
		this->_Hitpoints = obj._Hitpoints;
		this->_Name = obj._Name;
	}
	std::cout << "Assignment operator overload for ScavTrap attempted!" << std::endl;
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << "A ScavTrap named " << this->_Name << " has entered in Gatekeeper mode!" << std::endl;
}
