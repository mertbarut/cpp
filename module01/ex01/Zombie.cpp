/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:40:03 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/03 16:07:19 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
	std::cout << "A zombie spawned!" << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << "A zombie despawned!" << std::endl;
}

void	Zombie::setName( std::string name )
{
	Zombie::name = name;
}

void Zombie::announce( void )
{
	std::cout << "<" << Zombie::name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}
