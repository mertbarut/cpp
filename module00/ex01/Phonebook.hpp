/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:18:33 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/03 13:40:54 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef PHONEBOOKCLASS_H
# define PHONEBOOKCLASS_H

class Contact {
	public:
		int				index;
		std::string		first_name;
		std::string		last_name;
		std::string		nickname;
		std::string		phone;
		std::string		secret;
		Contact(void);
		~Contact(void);
};

class Phonebook {
	public:
		Contact	contact[8];
		Phonebook(void);
		~Phonebook(void);
};

#endif