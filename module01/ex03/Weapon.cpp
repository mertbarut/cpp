/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:51:37 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/03 21:43:28 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void				Weapon::setType( std::string name )
{
	Weapon::type = name;
}

const std::string&	Weapon::getType(void)
{
	std::string& string_ref = Weapon::type;
	return (string_ref);
}

Weapon::Weapon( std::string name )
{
	Weapon::setType(name);
}

Weapon::~Weapon( void ) { }
