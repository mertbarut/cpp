/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:51:37 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/16 12:52:21 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void				Weapon::setType( std::string name )
{
	this->_type = name;
}

const std::string&	Weapon::getType( void )
{
	std::string& string_ref = this->_type;
	return (string_ref);
}

Weapon::Weapon( std::string name )
{
	this->setType(name);
}

Weapon::~Weapon( void ) { }
