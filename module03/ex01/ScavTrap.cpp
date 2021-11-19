/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 19:03:07 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/19 17:18:45 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap( void )
{
	this->setName("NULL");
	this->setHitpoints(100);
	this->setEnergypoints(50);
	this->setAttackdamage(20);
	std::cout << "A ScavTrap has appeared!" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "A ScavTrap has disappeared!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
	*this = obj;
	std::cout << "Copy constructor for ScavTrap is called!" << std::endl;
}

ScavTrap::ScavTrap(	std::string Name )
{
	this->setName( Name );
	this->setHitpoints(100);
	this->setEnergypoints(50);
	this->setAttackdamage(20);
	std::cout << "Custom constructor for ScavTrap is called!" << std::endl;
}

ScavTrap& ScavTrap::operator= ( const ScavTrap &obj )
{
	if (this != &obj)
	{
		this->setAttackdamage(obj.getAttackdamage());
		this->setEnergypoints(obj.getEnergypoints());
		this->setHitpoints(obj.getHitpoints());
		this->setName(obj.getName());
	}
	std::cout << "Assignment operator overload for ScavTrap attempted!" << std::endl;
	return (*this);
}

void ScavTrap::attack( std::string const &target )
{
	std::cout << "Scavtrap " << this->getName() << RED " attack " RESET << target << ", causing " << this->getAttackdamage() << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage( unsigned int amount )
{
	std::cout << "Scavtrap " << this->getName() << " has taken " << amount << " points of damage!" << std::endl;
}

void ScavTrap::beRepaired( unsigned int amount )
{
	std::cout << "Scavtrap " << this->getName() << " has " << GREEN "repaired " RESET << amount << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "A ScavTrap named " << this->getName() << " has entered in Gatekeeper mode!" << std::endl;
}
