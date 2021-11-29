/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:10:01 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/29 15:03:38 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <algorithm>
#include <vector>

int main(void)
{
	std::vector<int>	T;

	T.push_back(2); // 0
	T.push_back(3); // 1
	T.push_back(5); // 2
	T.push_back(7); // 3
	T.push_back(11); // 4
	T.push_back(13); // 5
	T.push_back(17); // 6
	T.push_back(19); // 7
	T.push_back(23); // 8

	for (int i = 0; i < 30; i++)
		easyfind(T, i);
	return 0;
}