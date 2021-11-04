/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:11:20 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/03 21:06:46 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#ifndef __HUMANA_H__
# define __HUMANA_H__

class HumanA {

public:

	Weapon	&wp;
	std::string			name = "NULL";
	void	attack(void);
	void	setWeapon(Weapon wp);
	HumanA( std::string name, Weapon &wp );
	~HumanA( void );

};

#endif