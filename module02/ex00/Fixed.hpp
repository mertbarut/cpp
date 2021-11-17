/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:34:00 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/17 13:51:22 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

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

};

#endif