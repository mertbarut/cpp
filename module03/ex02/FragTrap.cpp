/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:16:01 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/07 23:01:19 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap( void )
{
	this->_Name = "NULL";
	this->_Hitpoints = 100;
	this->_Energypoints = 100;
	this->_Attackdamage = 30;
	std::cout << "A FragTrap has appeared!" << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << "A FragTrap has disappeared!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj)
{
	*this = obj;
	std::cout << "Copy constructor for FragTrap is called!" << std::endl;
}

FragTrap::FragTrap(	std::string Name, unsigned int Hitpoints, unsigned int Energypoints, unsigned int Attackdamage )
{
	this->_Name = Name;
	this->_Hitpoints = Hitpoints;
	this->_Energypoints = Energypoints;
	this->_Attackdamage = Attackdamage;
	std::cout << "Custom constructor for FragTrap is called!" << std::endl;
}

FragTrap& FragTrap::operator= ( const FragTrap &obj )
{
	if (this != &obj)
	{
		this->_Attackdamage = obj._Attackdamage;
		this->_Energypoints = obj._Energypoints;
		this->_Hitpoints = obj._Hitpoints;
		this->_Name = obj._Name;
	}
	std::cout << "Assignment operator overload for FragTrap attempted!" << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "A FragTrap named " << this->_Name << " is looking for a high five!" << std::endl;
}
