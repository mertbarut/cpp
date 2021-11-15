/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:19:31 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/15 15:09:09 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		void	*ptr;

		ptr	= argv[1];
		
		char c = static_cast<char>(((char *)ptr)[0]);
		if (!isupper(c) && !islower(c))
			std::cout << "char = Non displayable" << std::endl;
		else
			std::cout << "char = " << c << std::endl;

		int i = static_cast<int>(std::atoi((char *)ptr));		
		std::cout << "int = " << i << std::endl;

		float f = static_cast<float>(std::atof((char *)(ptr)));
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "float = " << f << std::endl;

		return (0);
	}
	else
		return (1);
}
