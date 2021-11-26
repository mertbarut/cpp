/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:55:33 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/26 15:15:00 by mbarut           ###   ########.fr       */
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

	Array<int> ex02 = ex01;
	std::cout << ex02[7] << std::endl;

	Array<int> ex03(ex01);
	std::cout << ex02[7] << std::endl;

	return 0;
}
