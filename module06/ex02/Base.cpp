/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:23:56 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/25 17:00:25 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base::~Base( void )
{
	//std::cout << "Base destructor is called!" << std::endl;
}

Base	*generate(void)
{
	Base	*ptr = NULL;
	
	std::srand(std::time(nullptr));
	int	rand = std::rand();
	switch (rand % 3)
	{
	case 0:
		{
			ptr = new A; 
			break ;
		}
	case 1:
		{
			ptr = new B;
			break ;
		}
	case 2:
		{
			ptr = new C;
			break ;
		}
	default:
		break;
	}
	return ptr ;
}

void	identify(Base* p)
{
	if ( dynamic_cast<A*>(p) )
		std::cout << "A" << std::endl;
	else if( dynamic_cast<B*>(p) )
		std::cout << "B" << std::endl;
	else if( dynamic_cast<C*>(p) )
		std::cout << "C" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A& object_a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void)object_a;
		return ;
	}
	catch(const std::bad_cast& e)
	{
		// Exception deliberately ignored
	}
	try
	{
		B& object_b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		(void)object_b;
		return ;
	}
	catch(const std::bad_cast& e)
	{
		// Exception deliberately ignored
	}
	try
	{
		C& object_c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		(void)object_c;
		return ;
	}
	catch(const std::bad_cast& e)
	{
		// Exception deliberately ignored
	}
}