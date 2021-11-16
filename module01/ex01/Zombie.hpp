/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:25:40 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/16 12:30:24 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>
#include <new>

class Zombie {

public:

	Zombie( void );
	~Zombie( void );
	std::string getName( void );
	void	setName( std::string name );
	Zombie( std::string name );
	void	announce( void );

private:

	std::string _name;

};

Zombie* ZombieHorde( int N, std::string name );

#endif