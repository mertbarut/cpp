/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:14:17 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/07 14:39:45 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

float	sign (Point const a, Point const b, Point const c)
{
    return ((a.getX().toFloat() - c.getX().toFloat()) * (b.getY().toFloat() \
	- c.getY().toFloat()) - (b.getX().toFloat() \
	- c.getX().toFloat()) * (a.getY().toFloat() \
	- c.getY().toFloat()));
}

bool	bsp( Point const a, Point const b, Point const c, Point const point )
{
    float	d1, d2, d3;
    bool	has_neg, has_pos;

    d1 = sign(point, a, b);
    d2 = sign(point, b, c);
    d3 = sign(point, c, a);

    has_neg = (d1 <= 0) || (d2 <= 0) || (d3 <= 0);
    has_pos = (d1 >= 0) || (d2 >= 0) || (d3 >= 0);

    return !(has_neg && has_pos);
}
