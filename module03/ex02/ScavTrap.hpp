/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 19:03:04 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/19 17:16:31 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <string>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{

public:

	ScavTrap( void );
	~ScavTrap( void );
	ScavTrap( const ScavTrap &obj );
	ScavTrap& operator= ( const ScavTrap &obj );

	ScavTrap( std::string Name );
	
	void			attack( std::string const &target );
	void			takeDamage( unsigned int amount );
	void			beRepaired( unsigned int amount );

	void			guardGate(void);

};

#endif