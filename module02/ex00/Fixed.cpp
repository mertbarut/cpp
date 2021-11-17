/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:33:57 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/17 13:52:46 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed( void ) : _value(0) { std::cout << "Default constructor called" << std::endl; }

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	_value = obj.getRawBits();
}

Fixed& Fixed::operator= (const Fixed &obj )
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &obj)
		_value = obj.getRawBits();
	return (*this);
}

Fixed::~Fixed( void ) { std::cout << "Destructor called" << std::endl; };

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(_value);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}
