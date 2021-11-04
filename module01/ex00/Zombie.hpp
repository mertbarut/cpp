/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:25:40 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/03 15:55:16 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <new>

#ifndef __ZOMBIE_H__
# define __ZOMBIE_H__

class Zombie {

public:

	void	announce( void );
	Zombie( std::string name );
	~Zombie( void );

private:

	std::string name = "name";

};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif