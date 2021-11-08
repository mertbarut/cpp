/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:34:03 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/07 23:01:49 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>
#include <string>

DiamondTrap::DiamondTrap( void )
{
	this->_Name = "NULL";
	ClapTrap::_Name = this->_Name.append("_clap_name");
	this->_Hitpoints = FragTrap::_Hitpoints;
	this->_Energypoints = ScavTrap::_Energypoints;
	this->_Attackdamage = FragTrap::_Attackdamage;
	std::cout << "A DiamondTrap has appeared!" << std::endl;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "A DiamondTrap has disappeared!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj)
{
	*this = obj;
	std::cout << "Copy constructor for DiamondTrap is called!" << std::endl;
}

DiamondTrap::DiamondTrap(	std::string Name )
{
	this->_Name = Name;
	ClapTrap::_Name = Name.append("_clap_name");
	std::cout << "Custom constructor for DiamondTrap is called!" << std::endl;
}

DiamondTrap& DiamondTrap::operator= ( const DiamondTrap &obj )
{
	if (this != &obj)
	{
		this->_Attackdamage = obj._Attackdamage;
		this->_Energypoints = obj._Energypoints;
		this->_Hitpoints = obj._Hitpoints;
		this->_Name = obj._Name;
	}
	std::cout << "Assignment operator overload for DiamondTrap attempted!" << std::endl;
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "A DiamondTrap named " << this->_Name << " has a ClapTrap name of " << ClapTrap::_Name << std::endl;
}
