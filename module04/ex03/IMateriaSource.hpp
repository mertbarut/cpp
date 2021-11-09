/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:59:18 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/09 21:53:18 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_H
# define IMATERIASOURCE_H

#include "AMateria.hpp"
#include <string>

class IMateriaSource {

public:

	virtual ~IMateriaSource() {};
	virtual void learnMateria( AMateria* materia ) = 0; 
	virtual AMateria* createMateria( std::string const &type ) = 0;

};

#endif