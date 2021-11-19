/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:34:06 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/19 18:00:16 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include <string>

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{

private:

	std::string		_Name;

public:

	DiamondTrap( void );
	~DiamondTrap( void );
	DiamondTrap( const DiamondTrap &obj );
	DiamondTrap& operator= ( const DiamondTrap &obj );

	DiamondTrap( std::string Name );
	virtual std::string		getName() const;
	virtual void			setName( std::string );

	virtual void	attack( std::string const &target );
	virtual void	takeDamage( unsigned int amount );
	virtual void	beRepaired( unsigned int amount );

	void			whoAmI(void);

};

#endif