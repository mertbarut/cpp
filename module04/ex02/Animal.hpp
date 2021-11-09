/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:36:05 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/09 14:25:07 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_H__
# define __ANIMAL_H__

#include <string>

class Animal {
	
protected:

	std::string 	type;

public:

	Animal( void );
	virtual ~Animal( void );
	Animal( const Animal &obj );
	Animal( std::string typeName );
	Animal& operator= ( const Animal &obj );

	virtual void	makeSound(void) const = 0; /* pure virtual member function */
	std::string		getType(void) const;

};

#endif