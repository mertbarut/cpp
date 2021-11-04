/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:14:11 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/03 23:20:20 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack(void)
{
	std::cout << HumanB::name << " attacks with his " << HumanB::wp->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& wp)
{
	HumanB::wp = &wp;
	std::cout << HumanB::name << " has equipped " << HumanB::wp->getType() << std::endl;
}

HumanB::HumanB( std::string name ): name(name)
{
	std::cout << name << " has entered the scene" << std::endl;
}

HumanB::~HumanB( void )
{
	std::cout << HumanB::name << " has left the scene" << std::endl;
}
