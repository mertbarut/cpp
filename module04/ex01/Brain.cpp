/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:02:46 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/08 21:12:09 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <string>
#include <iostream>

Brain::Brain( void )
{
	std::cout << "A Brain has appeared!" << std::endl;
}

Brain::~Brain( void )
{
	std::cout << "A Brain has disappeared!" << std::endl;
}

Brain::Brain(const Brain &obj)
{
	*this = obj;
	std::cout << "Copy constructor for class Brain is called!" << std::endl;
}

Brain& Brain::operator= ( const Brain &obj )
{
	if (this != &obj)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = obj.ideas[i];
	}
	std::cout << "Assignment operator overload for class Brain is used!" << std::endl;
	return (*this);
}
