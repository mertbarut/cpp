/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:52:33 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/19 19:09:59 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>

int main (void)
{
	FragTrap a;
	FragTrap b( "FR4G-TP" );

	std::cout << "a:: Name: " << a.getName() << std::endl;
	std::cout << "a:: Hit points: " << a.getHitpoints() << std::endl;
	std::cout << "a:: Energy points: " << a.getEnergypoints() << std::endl;
	std::cout << "a:: Attack damage: " << a.getAttackdamage() << std::endl;

	std::cout << "b:: Name: " << b.getName() << std::endl;
	std::cout << "b:: Hit points: " << b.getHitpoints() << std::endl;
	std::cout << "b:: Energy points: " << b.getEnergypoints() << std::endl;
	std::cout << "b:: Attack damage: " << b.getAttackdamage() << std::endl;
	
	b.attack("CL4P-TP");
	b.takeDamage(10);
	b.beRepaired(6);
	b.highFivesGuys();
}
