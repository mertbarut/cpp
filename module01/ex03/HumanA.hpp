/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:11:20 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/16 13:01:11 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#ifndef HUMANA_H
# define HUMANA_H

class HumanA {

private:

	Weapon	&wp;
	std::string		_name;

public:

	void	attack( void );
	void	setWeapon(Weapon wp);
	Weapon&	getWeapon( void );
	void	setName(std::string name);
	std::string getName( void );
	HumanA( std::string name, Weapon &wp );
	~HumanA( void );

};

#endif