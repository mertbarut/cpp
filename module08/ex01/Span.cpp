/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:03:44 by mbarut            #+#    #+#             */
/*   Updated: 2021/12/01 18:31:53 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <algorithm>
#include <vector>
#include <iostream>

Span::Span( void )
{
	this->_ptr = new std::vector<int>();
	this->_ptr->clear();
}

Span::~Span( void )
{
	delete this->_ptr;
}

Span::Span( const Span &obj )
{
	//std::cout << "Span copy constructor is called!" << std::endl;
	this->_ptr = new std::vector<int>( obj.getCapacity() );
	this->_ptr->clear();
	for (unsigned int i = 0; i < obj.getN(); i++)
		this->_ptr->push_back(obj._ptr->at(i));
		
}

Span::Span( unsigned int N )
{
	//std::cout << "Span custom constructor is called!" << std::endl;
	this->_ptr = new std::vector<int>(N);
	this->_ptr->clear();
}

Span& Span::operator= ( const Span &obj )
{
	std::cout << "Span assignment operator overload is called!" << std::endl;
	this->_ptr = new std::vector<int>( obj.getCapacity() );
	this->_ptr->clear();
	for (unsigned int i = 0; i < obj.getN(); i++)
		this->_ptr->push_back(obj._ptr->at(i));
	return *this;	
}

unsigned int	Span::getN() const
{
	return static_cast<unsigned int>(this->_ptr->size());
}

unsigned int	Span::getCapacity() const
{
	return static_cast<unsigned int>(this->_ptr->capacity());
}

const char * Span::OutofCapacityException::what () const throw ()
{
	return ("'OutofCapacityException': addNumber() called with out of capacity Span object");
}

const char * Span::InvalidSpanException::what () const throw ()
{
	return ("'InvalidSpanException': Span object contains insufficient number of items");
}

void	Span::addNumber( int number )
{
	try
	{
		//std::cout << "addNumber(" << number << ") called" << std::endl;
		if (this->getCapacity() == this->getN())
			throw Span::OutofCapacityException();
		else
		{
			this->_ptr->push_back(number);
			//std::cout << "Capacity: " << this->getCapacity() << std::endl;
			//std::cout << "N: " << this->getN() << std::endl;
		}
	}
	catch (Span::OutofCapacityException& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
}

unsigned int	Span::shortestSpan() const
{
	try
	{
		unsigned int n = this->getN();
		if (n < 2)
			throw Span::InvalidSpanException();
		else
		{
			unsigned long span = 0;
			std::vector<int> tmp = *this->_ptr;
			std::sort(tmp.begin(), tmp.end());
			for (unsigned int i = 0; i < n - 1; i++)
			{
				if ((unsigned int)(tmp[i + 1] - tmp[i]) > span)
					span = (unsigned int)(tmp[i + 1] - tmp[i]);
			}
			return span;
		}
	}
	catch (Span::OutofCapacityException& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
		std::terminate();
	}
}

unsigned int	Span::longestSpan() const
{
	try
	{
		unsigned int n = this->getN();
		if (n < 2)
			throw Span::InvalidSpanException();
		else
		{
			std::vector<int> tmp = *this->_ptr;
			std::sort(tmp.begin(), tmp.end());
			//std::cout << *tmp.begin() << " " << *(tmp.begin() + this->getN() - 1) << std::endl;
			return *(tmp.begin() + this->getN() - 1) - *tmp.begin();
		}
	}
	catch (Span::OutofCapacityException& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
		std::terminate();
	}
}

void			Span::print() const
{
	std::cout << "[ ";
	for (unsigned int i = 0; i < this->getN(); i++)
		std::cout << this->_ptr->at(i) << " ";
	std::cout << "]" << std::endl;
}

void			Span::addNumberRange( int number1, int number2, int gap )
{
	if ( number1 >= number2 || number2 - number1 <= gap )
		return ;
	for ( int i = number1; i <= number2; i += gap)
		this->addNumber(i);
}