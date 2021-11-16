/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:04:08 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/16 13:13:52 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

void	HumanA::attack(void)
{
	std::cout << this->getName() << " attacks with his " << this->getWeapon().getType() << std::endl;
}

void	HumanA::setWeapon(Weapon wp)
{
	this->wp = wp;
	std::cout << this->getName() << " has equipped " << this->getWeapon().getType() << std::endl;
}

Weapon&	HumanA::getWeapon( void )
{
	return this->wp;
}

HumanA::HumanA( std::string name, Weapon& wp ) : wp(wp)
{
	this->setName(name);
	this->setWeapon(wp);
	std::cout << this->getName() << " has entered the scene" << std::endl;
}

HumanA::~HumanA( void )
{
	std::cout << this->getName() << " has left the scene" << std::endl;
}

void	HumanA::setName(std::string name)
{
	this->_name = name;
}

std::string HumanA::getName( void )
{
	return this->_name;
}
