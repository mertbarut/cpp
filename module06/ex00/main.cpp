/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:19:31 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/25 16:56:58 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

bool is_valid(const std::string& s)
{
	int dot_count = 0;
	int f_count = 0;

    std::string::const_iterator it = s.begin();
    while (it != s.end() && (std::isdigit(*it) || (*it == 'f' && ++f_count) || (*it == '.' && ++dot_count)))
	{
		if (dot_count > 1 || f_count > 1)
			break ;
		++it;
	}
    return !s.empty() && it == s.end();
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		void	*ptr;

		ptr	= argv[1];
		
		std::string str = (std::string)((char *)ptr);

		double inf = std::numeric_limits<double>::infinity();
		float inff = std::numeric_limits<float>::infinity();

		/* Handle pseudo literals */
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

		if (str.length() >= 1 
			&& (str.begin()[0] == '+' || str.begin()[0] == '-' || std::isdigit(str.begin()[0]))
			&& (std::isdigit(str.begin()[0]) || std::isdigit(str.begin()[1]))
			&& (is_valid(&str[1]) || is_valid(str)))
		{
			/* Handle char literals */
			unsigned char c = (unsigned char)(std::atoi((char *)ptr));
			if (!std::isprint(c))
				std::cout << "char = Non displayable" << std::endl;
			else
				std::cout << "char = \'" << c << "\'" << std::endl;

			/* Handle int */
			long i = (long)std::atol((char *)ptr);
			if (i < INT32_MAX && i > INT32_MIN)
				std::cout << "int = " << (int)i << std::endl;
			else
				std::cout << "int = impossible" << std::endl;

			/* Handle float */
			float f = std::atof((char *)(ptr));
			std::cout << std::fixed << std::setprecision(1);
			std::cout << "float = " << f << "f" << std::endl;

			/* Handle double */
			double d = (double)std::atof((char *)(ptr));
			std::cout << std::fixed << std::setprecision(1);
			std::cout << "double = " << d << std::endl;
		}
		else
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
			return (0);
		}
		return (0);
	}
	else
		return (1);
}
