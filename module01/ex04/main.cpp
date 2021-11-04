/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:34:55 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/04 16:51:41 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::ifstream	ifs;
		std::ofstream	ofs;
		std::string		buf = "";
		ifs.open((std::string)argv[1], std::ifstream::in);
		std::string		s1 = argv[2];
		std::string		s2 = argv[3];
		if (s1.length() == 0 || s2.length() == 0)
			return (1);
		ofs.open((std::string)argv[1] + (std::string)".replace", std::ifstream::out);

		char c = ifs.get();
		while (ifs.good())
		{
			buf.insert(buf.end(), c);
			c = ifs.get();
		}
		size_t pos = 0;
		while((pos = buf.find(s1, 0)) != buf.npos)
		{
			buf = buf.erase(pos, s1.length());
			buf.insert(pos, s2);
		}
		ofs << buf; 
		ifs.close();
		ofs.close();
	}
	return (0);
}