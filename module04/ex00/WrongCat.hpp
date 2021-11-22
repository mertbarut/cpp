/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:02:16 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/08 17:10:32 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

#include "WrongAnimal.hpp"
#include <string>

class WrongCat : public WrongAnimal {

public:

	WrongCat( void );
	virtual ~WrongCat( void );
	WrongCat( const WrongCat &obj );
	WrongCat( std::string typeName );
	WrongCat& operator= ( const WrongCat &obj );

	virtual void	makeSound(void) const;

};

#endif	