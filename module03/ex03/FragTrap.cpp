/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:16:01 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/19 17:22:24 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap( void )
{
	this->setName("NULL");
	this->setHitpoints(100);
	this->setEnergypoints(100);
	this->setAttackdamage(30);
	std::cout << "A FragTrap has appeared!" << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << "A FragTrap has disappeared!" << std::endl;
}

FragTrap::FragTrap( const FragTrap &obj )
{
	*this = obj;
	std::cout << "Copy constructor for FragTrap is called!" << std::endl;
}

FragTrap::FragTrap(	std::string Name )
{
	this->setName( Name );
	this->setHitpoints(100);
	this->setEnergypoints(100);
	this->setAttackdamage(30);
	std::cout << "Custom constructor for FragTrap is called!" << std::endl;
}

FragTrap& FragTrap::operator= ( const FragTrap &obj )
{
	if (this != &obj)
	{
		this->setAttackdamage(obj.getAttackdamage());
		this->setEnergypoints(obj.getEnergypoints());
		this->setHitpoints(obj.getHitpoints());
		this->setName(obj.getName());
	}
	std::cout << "Assignment operator overload for FragTrap attempted!" << std::endl;
	return (*this);
}

void FragTrap::attack( std::string const &target )
{
	std::cout << "Fragtrap " << this->getName() << RED " attack " RESET << target << ", causing " << this->getAttackdamage() << " points of damage!" << std::endl;
}

void FragTrap::takeDamage( unsigned int amount )
{
	std::cout << "Fragtrap " << this->getName() << " has taken " << amount << " points of damage!" << std::endl;
}

void FragTrap::beRepaired( unsigned int amount )
{
	std::cout << "Fragtrap " << this->getName() << " has " << GREEN "repaired " RESET << amount << " points of damage!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "A FragTrap named " << this->getName() << " is looking for a high five!" << std::endl;
}
