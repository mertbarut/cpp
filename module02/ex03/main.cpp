/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:34:02 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/07 14:41:22 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int main( void )
{
	Point		a( 0, 0 );
	Point		b( 0, 4 );
	Point		c( 3, 0 );

	std::cout << std::boolalpha;
	
	std::cout << "Point( 2, 2 ) is inside the triangle: " << bsp(a, b, c, Point( 2, 2 )) << std::endl;
	std::cout << "Point( 1, 1 ) is inside the triangle: " << bsp(a, b, c, Point( 1, 1 )) << std::endl;
	std::cout << "Point( 0, 0 ) is inside the triangle: " << bsp(a, b, c, Point( 0, 0 )) << std::endl;
	std::cout << "Point( 0, 3 ) is inside the triangle: " << bsp(a, b, c, Point( 0, 3 )) << std::endl;
	std::cout << "Point( 2, 0 ) is inside the triangle: " << bsp(a, b, c, Point( 2, 0 )) << std::endl;
	std::cout << "Point( 0.2, 0.9 ) is inside the triangle: " << bsp(a, b, c, Point( 0.2, 0.9 )) << std::endl;
	return 0;
}
