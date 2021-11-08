/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:52:33 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/07 19:18:40 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <string>

int main (void)
{
	ClapTrap a;
	ClapTrap b( "CL4P-TP", 13, 8, 5 );

	b.attack("CL5P-TP");
	b.takeDamage(7);
	b.beRepaired(1);

	ScavTrap c( "SC4V-TP", 60, 80, 10 );
	c.attack("CL4P-TP");
	c.takeDamage(2);
	c.beRepaired(9);
	c.guardGate();
}
