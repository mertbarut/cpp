/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:52:33 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/19 18:03:40 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>
#include <string>

int main (void)
{
	DiamondTrap e( "D14M-ND" );
	std::cout << ">> Hit points: " << e.getHitpoints() << std::endl;
	std::cout << ">> Energy points: " << e.getEnergypoints() << std::endl;
	std::cout << ">> Attack damage: " << e.getAttackdamage() << std::endl;
	e.attack("CL4P-TP");
	e.takeDamage(10);
	e.beRepaired(6);
	e.highFivesGuys();
	e.whoAmI();
}
