/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:33:57 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/06 23:42:53 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed( void ) : value(0) { std::cout << "Default constructor called" << std::endl; }

Fixed::Fixed(const Fixed &obj) : value(0)
{
	std::cout << "Copy constructor called" << std::endl;
	value = obj.value;
}

Fixed& Fixed::operator= (const Fixed &obj )
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &obj)
		value = obj.value;
	return (*this);
}

Fixed::~Fixed( void ) { std::cout << "Destructor called" << std::endl; };

int Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return(value);
}

void Fixed::setRawBits( int const raw )
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

/* new */

Fixed::Fixed(const int i) : value(0)
{
	std::cout << "Int constructor called" << std::endl;
	Fixed::setRawBits((int)(i * (1 << Fixed::fraction)));
}

Fixed::Fixed(const float f) : value(0)
{
	std::cout << "Float constructor called" << std::endl;
	Fixed::setRawBits((int)std::roundf(f * (1 << Fixed::fraction)));
}

float Fixed::toFloat( void ) const
{
	return ((float)this->getRawBits() / (float)(1 << Fixed::fraction));
}

int Fixed::toInt( void ) const
{
	return ((int)this->getRawBits() / (float)(1 << Fixed::fraction));
}

std::ostream& operator<< (std::ostream& out, const Fixed &obj )
{
	out << obj.toFloat();
	return (out);
}
