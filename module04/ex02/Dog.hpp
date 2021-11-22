/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:36:00 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/22 19:49:19 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Dog: public Animal {

private:

	Brain	*_brain;

public:

	Dog( void );
	virtual ~Dog( void );
	Dog( const Dog &obj );
	Dog( std::string type );
	Dog& operator= ( const Dog &obj );

	Brain	*getBrain( void ) const;
	void	setBrain( Brain* brain );

	void			makeSound(void) const;

};

#endif