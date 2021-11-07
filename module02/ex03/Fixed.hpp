/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:34:00 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/07 14:38:01 by mbarut           ###   ########.fr       */
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
	Fixed(const Fixed &obj);  					// explicit copy constructor
	Fixed(const int i);
	Fixed(const float f);
	Fixed& operator= (const Fixed &obj );		// assignment operation overload
	~Fixed( void );								// destructor

	int getRawBits( void ) const;
	void setRawBits( int const raw );

	float toFloat( void ) const;
	int toInt( void ) const;

	bool	operator==	(const Fixed &obj ) const;
	bool	operator>=	(const Fixed &obj ) const;
	bool	operator<=	(const Fixed &obj ) const;
	bool	operator!=	(const Fixed &obj ) const;
	bool	operator< 	(const Fixed &obj ) const;
	bool	operator> 	(const Fixed &obj ) const;
	Fixed	operator+	(const Fixed &obj ) const;
	Fixed	operator-	(const Fixed &obj ) const;
	Fixed	operator*	(const Fixed &obj ) const;
	Fixed	operator/	(const Fixed &obj ) const;
	Fixed&	operator++	() ;
	Fixed&	operator--	() ;
	Fixed	operator++	( int );
	Fixed	operator--	( int );

	static	Fixed& min(Fixed &obj1, Fixed &obj2);
	static const	Fixed& min(const Fixed &obj1, const Fixed &obj2);
	static	Fixed& max(Fixed &obj1, Fixed &obj2);
	static const	Fixed& max(const Fixed &obj1, const Fixed &obj2);
};

std::ostream& operator<< (std::ostream& out, const Fixed &obj );

#endif