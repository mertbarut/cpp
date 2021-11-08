/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:16:03 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/07 21:22:04 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_H__
# define __FRAGTRAP_H__

#include <string>

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{

public:

	FragTrap( void );
	~FragTrap( void );
	FragTrap( const FragTrap &obj );
	FragTrap( std::string Name, unsigned int Hitpoints, unsigned int Energypoints, unsigned int Attackdamage );
	FragTrap& operator= (const FragTrap &obj );

	void			highFivesGuys(void);

};

#endif