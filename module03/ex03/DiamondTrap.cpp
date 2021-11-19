/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:34:03 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/19 18:25:06 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>
#include <string>

DiamondTrap::DiamondTrap( void )
{
	FragTrap frag_for_reference;
	ScavTrap scav_for_reference;

	std::cout << "TEST: " << scav_for_reference.getEnergypoints() << std::endl;
	
	this->setName("NULL");
	this->setName(this->getName().append("_clap_name"));
	this->setHitpoints(frag_for_reference.getHitpoints());
	this->setEnergypoints(scav_for_reference.getEnergypoints());
	this->setAttackdamage(frag_for_reference.getAttackdamage());
	std::cout << "A DiamondTrap has appeared!" << std::endl;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "A DiamondTrap has disappeared!" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &obj )
{
	*this = obj;
	std::cout << "Copy constructor for DiamondTrap is called!" << std::endl;
}

DiamondTrap::DiamondTrap( std::string Name )
{
	FragTrap frag_for_reference;
	ScavTrap scav_for_reference;

	this->setName(Name);
	this->ClapTrap::setName(this->getName().append("_clap_name"));
	this->setHitpoints(frag_for_reference.getHitpoints());
	this->setEnergypoints(scav_for_reference.getEnergypoints());
	this->setAttackdamage(frag_for_reference.getAttackdamage());
	this->setName(Name);
	std::cout << "Custom constructor for DiamondTrap is called!" << std::endl;
}

DiamondTrap& DiamondTrap::operator= ( const DiamondTrap &obj )
{
	if (this != &obj)
	{
		this->setAttackdamage(obj.getAttackdamage());
		this->setEnergypoints(obj.getEnergypoints());
		this->setHitpoints(obj.getHitpoints());
		this->setName(obj.getName());
		this->ClapTrap::setName(obj.ClapTrap::getName());
	}
	std::cout << "Assignment operator overload for DiamondTrap attempted!" << std::endl;
	return (*this);
}

std::string		DiamondTrap::getName() const
{
	return this->_Name;
}

void			DiamondTrap::setName( std::string Name )
{
	this->_Name = Name;
}

void DiamondTrap::attack( std::string const &target )
{
	this->ScavTrap::attack(target);
}

void DiamondTrap::takeDamage( unsigned int amount )
{
	std::cout << "Diamondtrap " << this->getName() << " has taken " << amount << " points of damage!" << std::endl;
}

void DiamondTrap::beRepaired( unsigned int amount )
{
	std::cout << "Diamondtrap " << this->getName() << " has " << GREEN "repaired " RESET << amount << " points of damage!" << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "A DiamondTrap named " << this->getName() << " has a ClapTrap name of " << ClapTrap::getName() << std::endl;
}
