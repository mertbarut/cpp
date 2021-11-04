/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:18:37 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/03 13:40:57 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "Phonebook.hpp"

Contact::Contact(void)
{
	std::cout << "Contact constructed!" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	std::cout << "Contact destructed!" << std::endl;
	return ;
}

Phonebook::Phonebook(void)
{
	std::cout << "Phonebook constructed!" << std::endl;
	return ;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Phonebook destructed!" << std::endl;
	return ;
}

int main(void)
{
	std::string	cmd;
	std::string	search_index;
	Phonebook	phonebook;
	int			i = 0;
	int			j = 0;
	int			k = 0;
	int			len;
	int			phonebook_filled = 0;
	std::string str = "string";
	int			ret;

	while (1)
	{
		std::cin >> cmd;
		if (!cmd.compare(0, 4, "EXIT"))
			break ;
		else if (!cmd.compare(0, 3, "ADD"))
		{
			phonebook.contact[i].index = i;
			std::cout << "Enter first name: ";
			std::cin >> phonebook.contact[i].first_name;
			std::cout << "Enter last name: ";
			std::cin >> phonebook.contact[i].last_name;
			std::cout << "Enter nickname: ";
			std::cin >> phonebook.contact[i].nickname;
			std::cout << "Enter phone number: ";
			std::cin >> phonebook.contact[i].phone;
			std::cout << "Enter darkest secret: ";
			std::cin >> phonebook.contact[i].secret;
			std::cout << "Contact added to the phonebook successfully!" << std::endl;
			i++;
			if (i % 8 == 0)
			{
				phonebook_filled = 1;
				i = 0;
			}
		}
		else if (!cmd.compare(0, 6, "SEARCH"))
		{
			std::cout << " __________ __________ __________ __________ " << std::endl;
			std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
			if (phonebook_filled == 0)
				j = i;
			else
				j = 8;
			k = 0;
			while (j > 0)
			{
				std::cout << "|";
				// print out index
				std::cout << "         " << k << "|";
				// print out first name
				str = phonebook.contact[k].first_name;
				len = str.length();
				if (len > 10)
				{
					str.resize(9);
					str.insert(str.end(), 1, '.');
				}
				if (10 - len > 0)
				{
					str.insert(str.begin(), 10 - len, ' ');
				}
				std::cout << str << "|";
				// print out last name
				str = phonebook.contact[k].last_name;
				len = str.length();
				if (len > 10)
				{
					str.resize(9);
					str.insert(str.end(), 1, '.');
				}
				if (10 - len > 0)
				{
					str.insert(str.begin(), 10 - len, ' ');
				}
				std::cout << str << "|";
				// print out nickname
				str = phonebook.contact[k].nickname;
				len = str.length();
				if (len > 10)
				{
					str.resize(9);
					str.insert(str.end(), 1, '.');
				}
				if (10 - len > 0)
				{
					str.insert(str.begin(), 10 - len, ' ');
				}
				std::cout << str << "|";
				// end table
				std::cout << std::endl;
				j--;
				k++;
				if (k % 8 == 0)
					k = 0;
			}
			std::cout << "|__________|__________|__________|__________|" << std::endl;

			// search in index
			std::cout << "Enter index of desired entry: ";
			std::cin >> search_index;
			std::cout << std::endl;
			ret = search_index.compare(0, 1, "0");
			if (ret >= 0 && ret <= 7 && search_index.length() == 1)
			{
				if (phonebook_filled || i > ret)
				{
					std::cout << "First name:\t" << phonebook.contact[ret].first_name << std::endl;
					std::cout << "Last name:\t" << phonebook.contact[ret].last_name << std::endl;
					std::cout << "Nickname:\t" << phonebook.contact[ret].nickname << std::endl;
					std::cout << "Phone number:\t" << phonebook.contact[ret].phone << std::endl;
				}
				else
					std::cout << "No entry found for the given index" << std::endl;
			}
			else
				std::cout << "No entry found for the given index" << std::endl;
		}
		else
			continue ;
	}
}
