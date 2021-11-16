/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:40:08 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/16 12:45:45 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int N = 25;
	Zombie *zedp = ZombieHorde(N, "zed");
	for (int i = 0; i < N; i++)
		zedp[i].announce();
	delete[] zedp;
	return (0);
}
