/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:45:08 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/22 20:36:12 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

class Ice : public AMateria {

public:

	Ice( void );
	~Ice( void );
	Ice( const Ice &obj );
	Ice& operator= ( const Ice &obj );

	std::string	const &getType(void) const;
	void		setType( std::string type );

	AMateria* clone() const;
	void use( ICharacter& target );

};

#endif