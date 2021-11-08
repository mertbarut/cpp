/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 19:03:04 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/07 20:07:16 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_H__
# define __SCAVTRAP_H__

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{

public:

	ScavTrap( void );
	~ScavTrap( void );
	ScavTrap( const ScavTrap &obj );
	ScavTrap( std::string Name, unsigned int Hitpoints, unsigned int Energypoints, unsigned int Attackdamage );
	ScavTrap& operator= (const ScavTrap &obj );

	void			guardGate();

};

#endif