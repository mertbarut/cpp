/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:03:44 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/29 17:37:07 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <algorithm>
#include <vector>

Span::Span( void )
{
	this->_ptr = new vector<int>();
}

Span::~Span( void )
{
	delete this->_ptr;
}

Span::Span( const Span &obj )
{
	this->_ptr = new vector<int>();
	for (int i = 0; i < obj.size(); i++)
		this->_ptr.push_back(obj[i]);
}

Span::Span( unsigned int N )
{
	
}

Span::Span& operator= ( const Span &obj )
{
	
}

void	Span::addNumber( int number )
{
	
}

int		Span::shortestSpan()
{
	
}

int		Span::longestSpan()
{
	
}
