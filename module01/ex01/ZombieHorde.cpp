/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:41:27 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/16 12:39:28 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* ZombieHorde( int N, std::string name )
{
	Zombie *zedp;
	zedp = new Zombie[N];
	for (int i = 0; i < N; ++i)
		zedp[i].setName(name);
	return (zedp);
}
