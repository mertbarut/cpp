/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:52:31 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/19 16:04:44 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <string>

#ifndef CL

# define CL
# define RESET   "\033[0m"				/* Default */
# define BLACK   "\033[30m"      		/* Black */
# define RED     "\033[31m"      		/* Red */
# define GREEN   "\033[32m"      		/* Green */
# define YELLOW  "\033[33m"      		/* Yellow */
# define BLUE    "\033[34m"      		/* Blue */
# define MAGENTA "\033[35m"      		/* Magenta */
# define CYAN    "\033[36m"      		/* Cyan */
# define WHITE   "\033[37m"      		/* White */
# define BOLDBLACK   "\033[1m\033[30m"	/* Bold Black */
# define BOLDRED     "\033[1m\033[31m"	/* Bold Red */
# define BOLDGREEN   "\033[1m\033[32m"	/* Bold Green */
# define BOLDYELLOW  "\033[1m\033[33m"	/* Bold Yellow */
# define BOLDBLUE    "\033[1m\033[34m"	/* Bold Blue */
# define BOLDMAGENTA "\033[1m\033[35m"	/* Bold Magenta */
# define BOLDCYAN    "\033[1m\033[36m"	/* Bold Cyan */
# define BOLDWHITE   "\033[1m\033[37m"	/* Bold White */

#endif

class ClapTrap {
	
private:

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

	std::string		getName( void ) const;
	unsigned int	getHitpoints( void ) const;
	unsigned int	getEnergypoints( void ) const;
	unsigned int	getAttackdamage( void ) const;
	void			setName( std::string Name );
	void			setHitpoints( unsigned int Hitpoints );
	void			setEnergypoints( unsigned int Energypoints );
	void			setAttackdamage( unsigned int Attackdamage );

	void			attack( std::string const &target );
	void			takeDamage( unsigned int amount );
	void			beRepaired( unsigned int amount );

};

#endif