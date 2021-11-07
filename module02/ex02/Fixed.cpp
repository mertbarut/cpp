/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:33:57 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/07 13:32:47 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed( void ) : value(0) { std::cout << "Default constructor called" << std::endl; }

Fixed::Fixed(const Fixed &obj) : value(0)
{
	//std::cout << "Copy constructor called" << std::endl;
	value = obj.value;
}

Fixed& Fixed::operator= (const Fixed &obj )
{
	//std::cout << "Assignment operator called" << std::endl;
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

Fixed::Fixed(const int i) : value(0)
{
	//std::cout << "Int constructor called" << std::endl;
	Fixed::setRawBits((int)(i * (1 << Fixed::fraction)));
}

Fixed::Fixed(const float f) : value(0)
{
	//std::cout << "Float constructor called" << std::endl;
	this->setRawBits((int)std::roundf(f * (1 << Fixed::fraction)));
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

/* new */

bool	Fixed::operator== ( const Fixed &obj ) const { return this->value == obj.value ; }
bool	Fixed::operator>= ( const Fixed &obj ) const { return this->value >= obj.value ; }
bool	Fixed::operator<= ( const Fixed &obj ) const { return this->value <= obj.value ; }
bool	Fixed::operator!= ( const Fixed &obj ) const { return this->value != obj.value ; }
bool	Fixed::operator<  ( const Fixed &obj ) const { return this->value < obj.value ;  }
bool	Fixed::operator>  ( const Fixed &obj ) const { return this->value > obj.value ;  }
Fixed	Fixed::operator+  ( const Fixed &obj ) const { return Fixed( this->toFloat() + obj.toFloat() ); }
Fixed	Fixed::operator-  ( const Fixed &obj ) const { return Fixed( this->toFloat() - obj.toFloat() ); }
Fixed	Fixed::operator*  ( const Fixed &obj ) const { return Fixed( this->toFloat() * obj.toFloat() ); }
Fixed	Fixed::operator/  ( const Fixed &obj ) const { return Fixed( this->toFloat() / obj.toFloat() ); }
Fixed&	Fixed::operator++ () { value++ ; return *this; }
Fixed&	Fixed::operator-- () { value-- ; return *this; }
Fixed	Fixed::operator++ ( int ) { Fixed tmp = *this; ++*this; return tmp; }
Fixed	Fixed::operator-- ( int ) { Fixed tmp = *this; --*this; return tmp; }
Fixed&	Fixed::min(Fixed &obj1, Fixed &obj2) { if (obj1 > obj2) return(obj2); else return(obj1); }
const	Fixed& Fixed::min(const Fixed &obj1, const Fixed &obj2) { if (obj1 > obj2) return(obj2); else return(obj1); }
Fixed&	Fixed::max(Fixed &obj1, Fixed &obj2) { if (obj1 > obj2) return(obj1); else return(obj2); }
const	Fixed& Fixed::max(const Fixed &obj1, const Fixed &obj2) { if (obj1 > obj2) return(obj1); else return(obj2); }
