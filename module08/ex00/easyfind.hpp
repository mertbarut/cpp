/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:09:58 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/29 15:02:12 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

# include <cstddef>
# include <iostream>
# include <algorithm>
# include <vector>

template <typename T>
void easyfind(T container, int item)
{
	std::vector<int>::iterator it = std::find( container.begin(), container.end(), item);
	if ( it != container.end() )
		std::cout << "given item \'" << item << "\' is in the following position: " << it - container.begin() << std::endl;
	else
		std::cout << "given item \'" << item << "\' was not not found in the given container" << std::endl;
}

#endif