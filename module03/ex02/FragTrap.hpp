/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:16:03 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/20 16:59:54 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <string>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{

public:

	FragTrap( void );
	~FragTrap( void );
	FragTrap( const FragTrap &obj );
	FragTrap& operator= (const FragTrap &obj );
	
	FragTrap( std::string Name );

	void			attack( std::string const &target );

	void			highFivesGuys(void);

};

#endif