/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:34:00 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/06 23:56:27 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef __FIXED_H__
# define __FIXED_H__

class Fixed {

private:

	int		value;
	const int static	 fraction = 8;

public:

	Fixed( void );								// constructor
	Fixed(const Fixed &obj);  			// explicit copy constructor
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