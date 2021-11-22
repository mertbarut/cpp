/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:02:49 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/22 18:34:04 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <string>

class Brain {

private:

	std::string		_ideas[100];

public:

	Brain( void );
	virtual ~Brain( void );
	Brain( const Brain &obj );
	Brain& operator= ( const Brain &obj );

	std::string	getIdea( size_t index ) const;
	void		setIdea( size_t index, std::string idea );
};

#endif