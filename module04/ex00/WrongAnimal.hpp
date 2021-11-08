/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:02:16 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/08 21:14:42 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_H__
# define __WRONGANIMAL_H__

#include <string>

class WrongAnimal {

protected:

	std::string 	type;

public:

	WrongAnimal( void );
	virtual ~WrongAnimal( void );
	WrongAnimal( const WrongAnimal &obj );
	WrongAnimal( std::string typeName );
	WrongAnimal& operator= ( const WrongAnimal &obj );

	virtual void	makeSound(void) const;
	std::string		getType(void) const;

};

#endif