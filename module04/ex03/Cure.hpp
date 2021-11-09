/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:45:08 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/09 21:28:38 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

class Cure : public AMateria {

public:

	Cure( void );
	~Cure( void );
	Cure( const Cure &obj );
	Cure& operator= ( const Cure &obj );

	std::string	const & getType(void) const;

	Cure* clone() const;
	virtual void use(ICharacter& target);

};

#endif