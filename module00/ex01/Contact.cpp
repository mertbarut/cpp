/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:09:50 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/15 17:35:22 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

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

std::string Contact::getFirstName(void)
{
	return this->_first_name ;
}

std::string Contact::getLastName(void)
{
	return this->_last_name ;
}

std::string Contact::getNickname(void)
{
	return this->_nickname ;
}

std::string Contact::getPhone(void)
{
	return this->_phone ;
}

std::string Contact::getSecret(void)
{
	return this->_secret ;
}

void Contact::setIndex(int index)
{
	this->_index = index;
}

void Contact::setFirstName(std::string first_name)
{
	this->_first_name = first_name;
}

void Contact::setLastName(std::string last_name)
{
	this->_last_name = last_name;
}

void Contact::setNickname(std::string nickname)
{
	this->_nickname = nickname;
}

void Contact::setPhone(std::string phone)
{
	this->_phone = phone;
}

void Contact::setSecret(std::string secret)
{
	this->_secret = secret;
}
