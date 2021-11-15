/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:19:31 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/15 15:53:20 by mbarut           ###   ########.fr       */
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
		
		std::string str = (std::string)((char *)ptr);

		double inf = std::numeric_limits<double>::infinity();
		float inff = std::numeric_limits<float>::infinity();
		
		//std::cout << "TEST: " << str << std::endl;
		if (!str.compare("-inf"))
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: -" << inff << "f" << std::endl;
			std::cout << "double: -" << inf << std::endl;
			return (0);
		}
		if (!str.compare("inf") || !str.compare("+inf"))
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << inff << "f" << std::endl;
			std::cout << "double: " << inf << std::endl;
			return (0);
		}
		if (!str.compare("nan"))
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: nanf" << std::endl;
			std::cout << "double: nan" << std::endl;
			return (0);
		}
		if (!str.compare("-inff"))
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: -" << inff << "f" << std::endl;
			std::cout << "double: -" << inf << std::endl;
			return (0);
		}
		if (!str.compare("inff") || !str.compare("+inff"))
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << inff << "f" << std::endl;
			std::cout << "double: " << inf << std::endl;
			return (0);
		}
		if (!str.compare("nan"))
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: nanf" << std::endl;
			std::cout << "double: nan" << std::endl;
			return (0);
		}
		char c = static_cast<char>(((char *)ptr)[0]);
		if (!isupper(c) && !islower(c))
			std::cout << "char = Non displayable" << std::endl;
		else
			std::cout << "char = " << c << std::endl;

		int i = static_cast<int>(std::atoi((char *)ptr));		
		std::cout << "int = " << i << std::endl;

		float f = static_cast<float>(std::atof((char *)(ptr)));
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "float = " << f << "f" << std::endl;

		double d = static_cast<double>((float)std::atof((char *)(ptr)));
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "double = " << d << std::endl;

		return (0);
	}
	else
		return (1);
}
