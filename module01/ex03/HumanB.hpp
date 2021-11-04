/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:14:09 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/03 23:17:56 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#ifndef __HUMANB_H__
# define __HUMANB_H__

class HumanB {

public:

	Weapon	*wp;
	std::string			name = "NULL";
	void	attack(void);
	void	setWeapon(Weapon& wp);
	HumanB( std::string name );
	~HumanB( void );

};

#endif