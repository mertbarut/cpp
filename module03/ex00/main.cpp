/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:52:33 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/19 18:56:49 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

int main(void)
{
	ClapTrap a;
	ClapTrap b( "CL4P-TP", 10, 10, 0 );

	std::cout << "a:: Name: " << a.getName() << std::endl;
	std::cout << "a:: Hit points: " << a.getHitpoints() << std::endl;
	std::cout << "a:: Energy points: " << a.getEnergypoints() << std::endl;
	std::cout << "a:: Attack damage: " << a.getAttackdamage() << std::endl;

	std::cout << "b:: Name: " << b.getName() << std::endl;
	std::cout << "b:: Hit points: " << b.getHitpoints() << std::endl;
	std::cout << "b:: Energy points: " << b.getEnergypoints() << std::endl;
	std::cout << "b:: Attack damage: " << b.getAttackdamage() << std::endl;

	a.setName("CL3P-TP");
	b.attack("CL3P-TP");
	a.takeDamage(5);
	a.beRepaired(1);
}
