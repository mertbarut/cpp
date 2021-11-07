/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:33:57 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/06 19:22:24 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

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
	std::cout << "getRawBits member function called" << std::endl;
	return(value);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}
