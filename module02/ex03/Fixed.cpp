/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:33:57 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/17 14:30:47 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed( void ) : _value(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
	//std::cout << "Copy constructor called" << std::endl;
	this->_value = obj.getRawBits();
}

Fixed& Fixed::operator= (const Fixed &obj )
{
	//std::cout << "Assignment operator called" << std::endl;
	if (this != &obj)
		this->_value = obj.getRawBits();
	return (*this);
}

Fixed::~Fixed( void )
{
	//std::cout << "Destructor called" << std::endl;
};

int Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return(this->_value);
}

void Fixed::setRawBits( int const raw )
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

Fixed::Fixed(const int i)
{
	//std::cout << "Int constructor called" << std::endl;
	this->setRawBits((int)(i * (1 << this->_fraction)));
}

Fixed::Fixed(const float f)
{
	//std::cout << "Float constructor called" << std::endl;
	this->setRawBits((int)std::roundf(f * (1 << this->_fraction)));
}

float Fixed::toFloat( void ) const
{
	return ((float)this->getRawBits() / (float)(1 << this->_fraction));
}

int Fixed::toInt( void ) const
{
	return ((int)this->getRawBits() / (float)(1 << this->_fraction));
}

std::ostream& operator<< (std::ostream& out, const Fixed &obj )
{
	out << obj.toFloat();
	return (out);
}

/* new */

bool	Fixed::operator== ( const Fixed &obj ) const { return this->_value == obj.getRawBits() ; }

bool	Fixed::operator>= ( const Fixed &obj ) const { return this->_value >= obj.getRawBits() ; }

bool	Fixed::operator<= ( const Fixed &obj ) const { return this->_value <= obj.getRawBits() ; }

bool	Fixed::operator!= ( const Fixed &obj ) const { return this->_value != obj.getRawBits() ; }

bool	Fixed::operator<  ( const Fixed &obj ) const { return this->_value < obj.getRawBits() ;  }

bool	Fixed::operator>  ( const Fixed &obj ) const { return this->_value > obj.getRawBits() ;  }

Fixed	Fixed::operator+  ( const Fixed &obj ) const { return Fixed( this->toFloat() + obj.toFloat() ); }

Fixed	Fixed::operator-  ( const Fixed &obj ) const { return Fixed( this->toFloat() - obj.toFloat() ); }

Fixed	Fixed::operator*  ( const Fixed &obj ) const { return Fixed( this->toFloat() * obj.toFloat() ); }

Fixed	Fixed::operator/  ( const Fixed &obj ) const { return Fixed( this->toFloat() / obj.toFloat() ); }

Fixed&	Fixed::operator++ () { this->_value++ ; return *this; }

Fixed&	Fixed::operator-- () { this->_value-- ; return *this; }

Fixed	Fixed::operator++ ( int ) { Fixed tmp = *this; ++*this; return tmp; }

Fixed	Fixed::operator-- ( int ) { Fixed tmp = *this; --*this; return tmp; }

Fixed&	Fixed::min(Fixed &obj1, Fixed &obj2) { return obj1 > obj2 ? obj2 : obj1 ; }

const	Fixed& Fixed::min(const Fixed &obj1, const Fixed &obj2) { return obj1 > obj2 ? obj2 : obj1 ; }

Fixed&	Fixed::max(Fixed &obj1, Fixed &obj2) { return obj1 > obj2 ? obj1 : obj2 ; }

const	Fixed& Fixed::max(const Fixed &obj1, const Fixed &obj2) { return obj1 > obj2 ? obj1 : obj2 ; }
