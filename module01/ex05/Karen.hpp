/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:06:14 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/16 13:32:07 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
# define KAREN_H

#include <iostream>
#include <string>

class Karen {

public:

	typedef void (Karen::*f_ptr)(void);
	void complain( std::string level );
	Karen();
	~Karen();

private:

	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

};

#endif