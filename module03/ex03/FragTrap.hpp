/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:16:03 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/19 17:36:36 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <string>
#include "ClapTrap.hpp"

class FragTrap: public virtual ClapTrap
{

public:

	FragTrap( void );
	~FragTrap( void );
	FragTrap( const FragTrap &obj );
	FragTrap& operator= (const FragTrap &obj );
	
	FragTrap( std::string Name );

	virtual void	attack( std::string const &target );
	virtual void	takeDamage( unsigned int amount );
	virtual void	beRepaired( unsigned int amount );

	void			highFivesGuys(void);

};

#endif