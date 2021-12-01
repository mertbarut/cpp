/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:09:58 by mbarut            #+#    #+#             */
/*   Updated: 2021/12/01 18:19:14 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

# include <algorithm>
# include <vector>
# include <exception>

class Span
{

private:

	std::vector<int> *_ptr;

public:

	Span( void );
	~Span( void );
	Span( const Span &obj );
	Span( unsigned int N );
	Span& operator= ( const Span &obj );

	unsigned int	getN() const; 
	unsigned int	getCapacity() const;

	void			addNumber( int number );
	void			addNumberRange( int number1, int number2, int gap );
	unsigned int	shortestSpan() const;
	unsigned int	longestSpan() const;
	void			print() const ;

	class OutofCapacityException : public std::exception
	{

	public:

		const char * what () const throw ();

	};

	class InvalidSpanException : public std::exception
	{

	public:

		const char * what () const throw ();

	};

};

#endif