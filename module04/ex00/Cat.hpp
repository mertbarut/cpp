/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:36:02 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/22 17:05:11 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"
#include <string>

class Cat: public Animal {

public:

	Cat( void );
	virtual ~Cat( void );
	Cat( const Cat &obj );
	Cat( std::string type );
	Cat& operator= ( const Cat &obj );

	void			makeSound(void) const;

};

#endif