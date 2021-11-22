/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:36:00 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/22 17:12:17 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"
#include <string>

class Dog: public Animal {

public:

	Dog( void );
	virtual ~Dog( void );
	Dog( const Dog &obj );
	Dog( std::string type );
	Dog& operator= ( const Dog &obj );

	void			makeSound(void) const;

};

#endif