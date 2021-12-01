/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:10:01 by mbarut            #+#    #+#             */
/*   Updated: 2021/12/01 18:33:37 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	std::srand(std::time(nullptr));

	{
		int m = 50000;
		Span sp(m);
	
		for (int i = 0; i < m; i++)
		{
			int tmp = std::rand();
			sp.addNumber(tmp);
		}
	
		sp.print();
	
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;	
	}
	
	{
		int m = 50000;
		Span sp(m);
	
		sp.addNumberRange(42, 424242, 42);
	
		sp.print();
	
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;	
	}

	{
		int m = 20;
		Span sp(m);
	
		sp.addNumberRange(-5, 5, 1);
	
		sp.print();
	
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;	
	}

}
