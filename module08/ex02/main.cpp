/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:57:30 by mbarut            #+#    #+#             */
/*   Updated: 2021/12/01 18:09:13 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iterator>
#include <stack>
#include "mutantstack.hpp"

int main()
{
	MutantStack<int>	mstack;
	
	mstack.push(5);
	mstack.push(5);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	// Add more pushes if you would like
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--ite;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;

}