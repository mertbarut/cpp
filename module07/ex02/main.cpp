/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:55:33 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/30 18:17:16 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Array.hpp"

int main(void)
{
	Array<int>	ex00;
	Array<int>	ex01(8);

	ex01[7] = 42;
	std::cout << ex01[7] << std::endl;

	{
		Array<int> ex02 = ex01;
		std::cout << ex02[7] << std::endl;
		std::cout << ex02[5] << std::endl;
	}

	{
		Array<int> ex03(ex01);
		std::cout << ex03[7] << std::endl;
		std::cout << ex03[5] << std::endl;
	}

	return 0;
}
