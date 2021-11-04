/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:40:03 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/03 15:56:55 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name )
{
	Zombie::name = name;
	std::cout << "A zombie named \'" << Zombie::name << "\' spawned!" << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << "The zombie named \'" << Zombie::name << "\' despawned!" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << "<" << Zombie::name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

