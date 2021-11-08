/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:35:57 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/08 21:13:58 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>
#include <string>

int main(void)
{
	const Animal * meta = new Animal();
	const Animal * j = new Dog();
	const Animal * i = new Cat();
	const WrongCat * w = new WrongCat();

	std::cout << meta->getType() << std::endl;
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	std::cout << w->getType() << std::endl;

	meta->makeSound();
	j->makeSound();
	i->makeSound();
	w->makeSound();
	
	delete meta;
	delete j;
	delete i;
	delete w;
	return (0);
}
