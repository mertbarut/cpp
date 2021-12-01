/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:57:34 by mbarut            #+#    #+#             */
/*   Updated: 2021/12/01 17:55:16 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MUTANTSTACK_H
# define MUTANTSTACK_H

# include <stack>
# include <iostream>

template <class T>
class MutantStack : public std::stack<T>
{

public:

	MutantStack()
	{
		std::cout << "MutantStack constructor called!" << std::endl;
	}
	
	~MutantStack()
	{
		std::cout << "MutantStack deconstructor called!" << std::endl;
	}

	MutantStack& operator= (const MutantStack &obj) // not supported
	{
		(void)obj;
		return *this;		
	}
	
	MutantStack( const MutantStack &obj )
	{
		*this = obj;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin()
	{
		return std::stack<T>::c.begin();
	}

	iterator end()
	{
		return std::stack<T>::c.end();
	}

};

#endif	/* MUTANTSTACK */