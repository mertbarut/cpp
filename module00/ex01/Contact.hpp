/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:07:41 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/15 17:32:04 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string>

class Contact {

	private:

		int				_index;
		std::string		_first_name;
		std::string		_last_name;
		std::string		_nickname;
		std::string		_phone;
		std::string		_secret;
	
	public:
	
		Contact(void);
		~Contact(void);
		int getIndex(void);
		std::string getFirstName(void);
		std::string getLastName(void);
		std::string getNickname(void);
		std::string getPhone(void);
		std::string getSecret(void);
		void setIndex(int index);
		void setFirstName(std::string first_name);
		void setLastName(std::string last_name);
		void setNickname(std::string nickname);
		void setPhone(std::string phone);
		void setSecret(std::string secret);

};

#endif