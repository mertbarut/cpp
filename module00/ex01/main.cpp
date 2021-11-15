/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:09:47 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/15 17:53:34 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

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

	std::string	first_name;
	std::string last_name;
	std::string nickname;
	std::string phone;
	std::string secret;

	while (1)
	{
		std::cin >> cmd;
		if (!cmd.compare("EXIT"))
			break ;
		else if (!cmd.compare("ADD"))
		{
			phonebook.getContact(i)->setIndex(i);
			std::cout << "Enter first name: ";
			std::cin >> first_name;
			phonebook.getContact(i)->setFirstName(first_name);
			std::cout << "Enter last name: ";
			std::cin >> last_name;
			phonebook.getContact(i)->setLastName(last_name);
			std::cout << "Enter nickname: ";
			std::cin >> nickname;
			phonebook.getContact(i)->setNickname(nickname);
			std::cout << "Enter phone number: ";
			std::cin >> phone;
			phonebook.getContact(i)->setPhone(phone);
			std::cout << "Enter darkest secret: ";
			std::cin >> secret;
			phonebook.getContact(i)->setSecret(secret);
			std::cout << "Contact added to the phonebook successfully!" << std::endl;
			i++;
			if (i % 8 == 0)
			{
				phonebook_filled = 1;
				i = 0;
			}
		}
		else if (!cmd.compare("SEARCH"))
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
				str = phonebook.getContact(k)->getFirstName();
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
				str = phonebook.getContact(k)->getLastName();
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
				str = phonebook.getContact(k)->getNickname();
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
			ret = search_index.compare("0");
			if (ret >= 0 && ret <= 7 && search_index.length() == 1)
			{
				if (phonebook_filled || i > ret)
				{
					std::cout << "First name:\t" << phonebook.getContact(ret)->getFirstName() << std::endl;
					std::cout << "Last name:\t" << phonebook.getContact(ret)->getLastName() << std::endl;
					std::cout << "Nickname:\t" << phonebook.getContact(ret)->getNickname() << std::endl;
					std::cout << "Phone number:\t" << phonebook.getContact(ret)->getPhone() << std::endl;
				}
				else
					std::cout << "No entry found for the given index" << std::endl;
			}
			else
				std::cout << "Given index is out of bounds" << std::endl;
		}
		else
			continue ;
	}
	return (0);
}
