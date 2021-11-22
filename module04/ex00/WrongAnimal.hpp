/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:02:16 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/22 17:19:55 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <string>

class WrongAnimal {

protected:

	std::string 	_type;

public:

	WrongAnimal( void );
	virtual ~WrongAnimal( void );
	WrongAnimal( const WrongAnimal &obj );
	WrongAnimal( std::string typeName );
	WrongAnimal& operator= ( const WrongAnimal &obj );

	virtual void	makeSound(void) const;

	std::string		getType(void) const;
	void			setType( std::string type );

};

#endif