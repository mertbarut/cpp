/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:36:00 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/08 21:16:12 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_H__
# define __DOG_H__

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Dog: public Animal {

private:

	const Brain* brain;

public:

	Dog( void );
	virtual ~Dog( void );
	Dog( const Dog &obj );
	Dog( std::string typeName );
	Dog& operator= ( const Dog &obj );

	void			makeSound(void) const;
	std::string		getType(void) const;

};

#endif