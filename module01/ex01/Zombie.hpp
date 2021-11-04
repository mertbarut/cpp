/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:25:40 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/03 16:08:26 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <new>

#ifndef __ZOMBIE_H__
# define __ZOMBIE_H__

class Zombie {

public:

	void	setName( std::string name );
	void	announce( void );
	Zombie( void );
	~Zombie( void );

private:

	std::string name = "name";

};

Zombie* ZombieHorde( int N, std::string name );

#endif