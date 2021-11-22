/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:36:05 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/22 20:09:48 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <string>

class Animal {
	
protected:

	std::string 	_type;

public:

	Animal( void );
	virtual ~Animal( void );
	Animal( const Animal &obj );
	Animal( std::string typeName );
	Animal& operator= ( const Animal &obj );

	std::string		getType(void) const;
	void			setType( std::string type );

	virtual void	makeSound(void) const = 0;

};

#endif