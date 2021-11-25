/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:21:27 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/25 16:40:51 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_H
# define BASE_H

class Base 
{
	
public:
	
	virtual ~Base( void );

};

Base	*generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif