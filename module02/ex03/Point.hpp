/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:41:56 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/17 14:24:45 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#ifndef POINT_H
# define POINT_H

class Point {

private:

	const Fixed	x;
	const Fixed	y;

public:

	Point( void );								// constructor
	Point(const Point &obj);  					// explicit copy constructor
	Point(const float x, const float y);
	Point& operator= (const Point &obj );		// assignment operation overload
	~Point( void );								// destructor

	Fixed getX( void ) const;
	Fixed getY( void ) const;

};

bool	bsp( Point const a, Point const b, Point const c, Point const point );

#endif