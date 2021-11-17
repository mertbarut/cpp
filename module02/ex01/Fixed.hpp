/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:34:00 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/17 14:04:03 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed {

private:

	int		_value;
	const int static	 _fraction = 8;

public:

	Fixed( void );								// constructor
	Fixed(const Fixed &obj);  					// explicit copy constructor
	Fixed& operator= (const Fixed &obj );		// assignment operation overload
	~Fixed( void );								// destructor

	int getRawBits( void ) const;
	void setRawBits( int const raw );

	/* new */
	Fixed(const int i);
	Fixed(const float f);
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream& operator<< (std::ostream& out, const Fixed &obj );

#endif