/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:52:33 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/19 16:02:04 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <ctime>
#include <iostream>
#include <string>

int main(void)
{
	ClapTrap a;
	ClapTrap b( "CL4P-TP", 13, 8, 5 );

	a.setName("CL3P-TP");
	b.attack("CL3P-TP");
	a.takeDamage(5);
	a.beRepaired(1);
}
