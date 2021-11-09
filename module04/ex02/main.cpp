/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:35:57 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/09 14:28:24 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>
#include <string>

int main(void)
{
	const Animal *animals[10];
	
	for (int i = 0; i < 9; i++)
	{
		if (i % 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	for (int i = 0; i < 9; i++)
		animals[i]->makeSound();
	for (int i = 0; i < 9; i++)
		delete animals[i];

	//const Animal cantexist;
	return (0);
}
