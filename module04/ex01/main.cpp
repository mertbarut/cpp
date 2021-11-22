/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:35:57 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/22 20:07:30 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>
#include <string>

int main(void)
{
	{
		const Animal *animals[10];
	
		for (int i = 0; i < 10; i++)
		{
			if (i % 2)
				animals[i] = new Cat;
			else
				animals[i] = new Dog;
		}
	
		for (int i = 0; i < 10; i++)
			animals[i]->makeSound();
	
		for (int i = 0; i < 10; i++)
			delete animals[i];
	}

	std::cout << "================================================================" << std::endl;

	{
		Cat *Simba = new Cat;
		std::cout << "Simba's 42nd idea is: " << Simba->getBrain()->getIdea(41) << std::endl;
		Simba->getBrain()->setIdea(41, "to eat food!");
		std::cout << "Simba's 42nd idea is: " << Simba->getBrain()->getIdea(41) << std::endl;
	
		Cat *Cleo = Simba;
		Cleo->getBrain()->getIdea(41);
		std::cout << "Cleo's 42nd idea is: " << Cleo->getBrain()->getIdea(41) << std::endl;
	
		Cat Shadow ( *Simba );
		Shadow.getBrain()->getIdea(41);
		std::cout << "Shadow's 42nd idea is: " << Shadow.getBrain()->getIdea(41) << std::endl;
	
		delete Simba;
	}

	std::cout << "================================================================" << std::endl;

	{
		Dog *Simon = new Dog;
		std::cout << "Simon's 42nd idea is: " << Simon->getBrain()->getIdea(41) << std::endl;
		Simon->getBrain()->setIdea(41, "to chase its own tail!");
		std::cout << "Simon's 42nd idea is: " << Simon->getBrain()->getIdea(41) << std::endl;
	
		Dog *Cooper = Simon;
		Cooper->getBrain()->getIdea(41);
		std::cout << "Cooper's 42nd idea is: " << Cooper->getBrain()->getIdea(41) << std::endl;
	
		Dog Rocky ( *Simon );
		Rocky.getBrain()->getIdea(41);
		std::cout << "Rocky's 42nd idea is: " << Rocky.getBrain()->getIdea(41) << std::endl;
	
		delete Simon;
	}

	return (0);
}
