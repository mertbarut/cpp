/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:25:40 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/16 12:25:06 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>
#include <new>

class Zombie {

public:

	Zombie( std::string name );
	~Zombie( void );
	void	announce( void );
	std::string getName( void );

private:

	std::string _name;

};

Zombie*		newZombie( std::string name );
void		randomChump( std::string name );

#endif