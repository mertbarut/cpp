/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:59:18 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/22 21:33:11 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <string>

enum	status {
	unused,
	used
};

class MateriaSource : public IMateriaSource
{

private:

	AMateria*	_inventory[4];	
	int			_count;
	int			_status[4];

public:

	MateriaSource();
	~MateriaSource();
	MateriaSource( MateriaSource const &obj );
	MateriaSource& operator= ( MateriaSource const &obj );

	void learnMateria( AMateria* m ); 
	AMateria* createMateria( std::string const &type );

	AMateria*	getMateria( int index ) const ;
	int			getSlotStatus( int index ) const ;
	int			getCount() const ;
	void		setMateria( int index, AMateria* inventory );
	void		setSlotStatus( int index, int status );
	void		setCount( int count );
};

#endif