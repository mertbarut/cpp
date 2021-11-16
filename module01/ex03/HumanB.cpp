/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:14:11 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/16 13:15:20 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

void	HumanB::attack(void)
{
	std::cout << this->getName() << " attacks with his " << this->getWeapon()->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& wp)
{
	this->wp = &wp;
	std::cout << this->getName() << " has equipped " << this->getWeapon()->getType() << std::endl;
}

Weapon *HumanB::getWeapon( void )
{
	return this->wp;
}

HumanB::HumanB( std::string name ): _name(name)
{
	std::cout << this->getName() << " has entered the scene" << std::endl;
}

HumanB::~HumanB( void )
{
	std::cout << this->getName() << " has left the scene" << std::endl;
}

void	HumanB::setName(std::string name)
{
	this->_name = name;
}

std::string HumanB::getName( void )
{
	return this->_name;
}
