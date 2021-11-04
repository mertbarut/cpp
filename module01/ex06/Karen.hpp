/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:06:14 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/04 18:53:23 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef __KAREN_H__
# define __KAREN_H__

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