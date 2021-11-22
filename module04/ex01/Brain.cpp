/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:02:46 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/22 19:07:57 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <string>
#include <iostream>

Brain::Brain( void )
{
	for( int i = 0; i < 100; i++ )
		this->setIdea(i, "NULL");
	std::cout << "A Brain has appeared!" << std::endl;
}

Brain::~Brain( void )
{
	std::cout << "A Brain has disappeared!" << std::endl;
}

Brain::Brain( const Brain &obj )
{
	*this = obj;
	std::cout << "Copy constructor for class Brain is called!" << std::endl;
}

Brain& Brain::operator= ( const Brain &obj )
{
	if (this != &obj)
	{
		for (int i = 0; i < 100; i++)
			this->setIdea(i, obj.getIdea(i));
	}
	std::cout << "Assignment operator overload for class Brain is used!" << std::endl;
	return (*this);
}

std::string	Brain::getIdea( size_t index ) const
{
	if (index < 100)
		return this->_ideas[index];
	else
		return "Index is out of bounds";
}

void 		Brain::setIdea( size_t index, std::string idea )
{
	if (index < 100)
		this->_ideas[index] = idea;
	else
	 	return ;
}
