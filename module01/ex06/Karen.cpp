/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:06:16 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/16 13:57:34 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void Karen::complain( std::string level )
{	
	f_ptr		f_ptrs[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 5; i++)
	{
		if (level == levels[i] || i == 4)
		{
			switch (i)
			{
			case 0:
			{
				std::cout << "[ " << levels[0] << " ]" << std::endl;
				(this->*f_ptrs[0])();
			}
			case 1:
			{
				std::cout << "[ " << levels[1] << " ]" << std::endl;
				(this->*f_ptrs[1])();
			}
			case 2:
			{
				std::cout << "[ " << levels[2] << " ]" << std::endl;
				(this->*f_ptrs[2])();
			}
			case 3:
			{
				std::cout << "[ " << levels[3] << " ]" << std::endl;
				(this->*f_ptrs[3])();
				return ;
			}
			default:
			{
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			}
			}
		}
	}
}

void Karen::debug( void )
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI just love it!" << std::endl;
}

void Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon cost more money.\nYou don’t put enough!\nIf you did I would not have to ask for it!" << std::endl;
}

void Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

Karen::Karen(void) { };
Karen::~Karen(void) { };
