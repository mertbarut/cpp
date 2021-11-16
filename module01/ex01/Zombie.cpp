/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:40:03 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/16 12:42:26 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
	std::cout << "A zombie spawned!" << std::endl;
}

Zombie::Zombie( std::string name ) : _name(name)
{
	std::cout << "A zombie named \'" << this->getName() << "\' spawned!" << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << "The zombie named \'" << this->getName() << "\' despawned!" << std::endl;
}

void	Zombie::setName( std::string name )
{
	this->_name = name;
}

void Zombie::announce( void )
{
	std::cout << "<" << this->getName() << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName( void )
{
	return this->_name;
}
