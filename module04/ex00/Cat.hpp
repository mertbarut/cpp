/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:36:02 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/08 21:14:31 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H__
# define __CAT_H__

#include "Animal.hpp"
#include <string>

class Cat: public Animal {

public:

	Cat( void );
	virtual ~Cat( void );
	Cat( const Cat &obj );
	Cat( std::string typeName );
	Cat& operator= ( const Cat &obj );

	void			makeSound(void) const;
	std::string		getType(void) const;

};

#endif