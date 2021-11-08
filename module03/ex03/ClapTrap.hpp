/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:52:31 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/07 20:05:06 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_H__
# define __CLAPTRAP_H__

#include <string>

class ClapTrap {
	
protected:

	std::string 	_Name;
	unsigned int	_Hitpoints;
	unsigned int	_Energypoints;
	unsigned int	_Attackdamage;

public:

	ClapTrap( void );
	~ClapTrap( void );
	ClapTrap( const ClapTrap &obj );
	ClapTrap( std::string Name, unsigned int Hitpoints, unsigned int Energypoints, unsigned int Attackdamage );
	ClapTrap& operator= (const ClapTrap &obj );

	void			attack( std::string const &target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

};

#endif