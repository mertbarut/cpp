/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:55:33 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/30 17:58:12 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "iter.hpp"

typedef void (*t_func)(int n);

void	printLeastSignificantDigit(int n)
{
	std::cout << n % 10 << " ";
}

int main(void)
{
	int arr[] = { 564, 4572, 459, 12, 78, 90 };

	std::cout << "The least significant bits in the given array are: ";
	
	t_func func = &printLeastSignificantDigit;
	
	iter(arr, 6, func);

	std::cout << std::endl;

	return 0;
}
