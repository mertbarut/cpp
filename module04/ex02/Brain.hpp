/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:02:49 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/08 21:16:21 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_H__
# define __BRAIN_H__

#include <string>

class Brain {

private:

	std::string		ideas[100];

public:

	Brain( void );
	virtual ~Brain( void );
	Brain( const Brain &obj );
	Brain( std::string typeName );
	Brain& operator= ( const Brain &obj );

};

#endif