/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:34:06 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/07 22:40:24 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_H__
# define __DIAMONDTRAP_H__

#include <string>

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap , public ScavTrap
{

private:

	std::string		_Name;

public:

	DiamondTrap( void );
	~DiamondTrap( void );
	DiamondTrap( const DiamondTrap &obj );
	DiamondTrap( std::string Name );
	DiamondTrap& operator= (const DiamondTrap &obj );

	void			whoAmI(void);

};

#endif