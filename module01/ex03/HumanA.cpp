/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:04:08 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/03 22:17:07 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout << HumanA::name << " attacks with his " << HumanA::wp.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon wp)
{
	HumanA::wp = wp;
	std::cout << HumanA::name << " has equipped " << HumanA::wp.getType() << std::endl;
}

HumanA::HumanA( std::string name, Weapon& wp ) : wp(wp)
{
	HumanA::name = name;
	HumanA::setWeapon(wp);
	std::cout << name << " has entered the scene" << std::endl;
}

HumanA::~HumanA( void )
{
	std::cout << HumanA::name << " has left the scene" << std::endl;
}