/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:34:00 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/07 01:34:44 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
};

#endif