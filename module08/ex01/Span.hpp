/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:09:58 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/29 17:24:29 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

Class Span
{

private:

	Span			*_ptr;
	int				_max;
	int				_min;
	unsigned int	_N;
	unsigned int	_cap;

public:

	Span( void );
	~Span( void );
	Span( const Span &obj );
	Span( unsigned int N );
	Span& operator= ( const Span &obj );

	int				getMax();
	int				getMin();
	unsigned int	getN();
	unsigned int	getCapacity();

	void	addNumber( int number );
	int		shortestSpan();
	int		longestSpan();

}

#endif