/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:41:58 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/07 14:37:14 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>
#include <cmath>

Point::Point( void ) : x(0), y(0) { }

Point::~Point( void ) { }

Point::Point(const Point &obj) : x(obj.x), y(obj.y) { }

Point::Point(const float x, const float y) : x(Fixed(x)), y(Fixed(y)) { }

Point& Point::operator= (const Point &obj )
{
	if (this != &obj)
		*this = Point(obj.x.toFloat(), obj.y.toFloat());
	return (*this);
}

Fixed Point::getX( void ) const
{
	return(this->x);
}

Fixed Point::getY( void ) const
{
	return(this->y);
}