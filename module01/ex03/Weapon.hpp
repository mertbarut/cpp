/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:38:23 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/03 22:25:19 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <new>

#ifndef __WEAPON_H__
# define __WEAPON_H__

class Weapon {

public:
	std::string type = "NULL";
	const std::string	&getType(void); 
	void				setType( std::string name );
	Weapon( std::string );
	~Weapon( void );

};

#endif