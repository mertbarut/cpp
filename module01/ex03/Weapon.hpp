/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:38:23 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/16 12:49:53 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <string>
#include <iostream>
#include <new>

class Weapon {

private:

	std::string _type;

public:
	
	Weapon( std::string );
	~Weapon( void );
	const std::string	&getType( void ); 
	void				setType( std::string name );

};

#endif