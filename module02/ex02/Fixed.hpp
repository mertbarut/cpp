/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:34:00 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/17 14:05:07 by mbarut           ###   ########.fr       */
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
	Fixed(const int i);
	Fixed(const float f);
	Fixed& operator= (const Fixed &obj );		// assignment operation overload
	~Fixed( void );								// destructor

	int getRawBits( void ) const;
	void setRawBits( int const raw );

	float toFloat( void ) const;
	int toInt( void ) const;

	/* new */
	bool	operator==	( const Fixed &obj ) const;
	bool	operator>=	( const Fixed &obj ) const;
	bool	operator<=	( const Fixed &obj ) const;
	bool	operator!=	( const Fixed &obj ) const;
	bool	operator< 	( const Fixed &obj ) const;
	bool	operator> 	( const Fixed &obj ) const;
	Fixed	operator+	( const Fixed &obj ) const;
	Fixed	operator-	( const Fixed &obj ) const;
	Fixed	operator*	( const Fixed &obj ) const;
	Fixed	operator/	( const Fixed &obj ) const;
	Fixed&	operator++	( void ) ;
	Fixed&	operator--	( void ) ;
	Fixed	operator++	( int );
	Fixed	operator--	( int );

	static	Fixed& min(Fixed &obj1, Fixed &obj2);
	static const	Fixed& min(const Fixed &obj1, const Fixed &obj2);
	static	Fixed& max(Fixed &obj1, Fixed &obj2);
	static const	Fixed& max(const Fixed &obj1, const Fixed &obj2);
};

std::ostream& operator<< (std::ostream& out, const Fixed &obj );

#endif