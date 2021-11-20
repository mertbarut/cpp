/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 19:22:47 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/20 20:26:45 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <cstdint>
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

typedef struct sData {

	int				index;
	std::string		name;
	unsigned int	age;
	float			height;
	float			weight;
	float			bmi;

} Data;

uintptr_t	serialize(Data* ptr)
{
	uintptr_t p = reinterpret_cast<std::uintptr_t>(ptr);
	return (p);
}

Data*		deserialize(uintptr_t raw)
{
	Data *p = reinterpret_cast<Data *>(raw);
	return (p);
}

int main(void)
{
	Data instance00;
	instance00.index = 0;
	instance00.name = "John";
	instance00.age = 29;
	instance00.height = 182.8;
	instance00.weight = 87.1;
	instance00.bmi = instance00.weight / (instance00.height * instance00.height / 10000);

	uintptr_t test = serialize(&instance00);
	Data *ptr = deserialize(test);

	std::cout << "Index: " << ptr->index << std::endl;
	std::cout << "Name: " << ptr->name << std::endl;
	std::cout << "Age: " << ptr->age << std::endl;
	std::cout << "Height: " << ptr->height << std::endl;
	std::cout << "Weight: " << ptr->weight << std::endl;
	std::cout << "BMI: " << ptr->bmi << std::endl;
	
	return (0);
}
