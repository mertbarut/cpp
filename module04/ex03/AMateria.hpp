/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:45:08 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/09 21:44:34 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

#include "ICharacter.hpp"
#include <string>

class ICharacter;

class AMateria {
	
protected:

	std::string 	_type;

public:

	AMateria( void );
	virtual ~AMateria( void );
	AMateria( const AMateria &obj );
	AMateria( std::string const &type );
	AMateria& operator= ( const AMateria &obj );

	std::string	const &getType(void) const;
	virtual AMateria* clone() const = 0; /* pure virtual member function */
	virtual void use(ICharacter& target);

};

#endif