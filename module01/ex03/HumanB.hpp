/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:14:09 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/16 12:59:55 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#ifndef HUMANB_H
# define HUMANB_H

class HumanB {

private:

	Weapon	*wp;
	std::string			_name;

public:

	void	attack(void);
	void	setWeapon(Weapon& wp);
	Weapon	*getWeapon( void );
	void	setName(std::string);
	std::string getName( void );
	HumanB( std::string name );
	~HumanB( void );

};

#endif