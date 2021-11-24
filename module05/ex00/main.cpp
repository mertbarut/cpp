/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:34:02 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/24 12:34:57 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

int main( void )
{
	Bureaucrat b0000("Johnson Johnson", 42);
	Bureaucrat b0001("Johnson Excepson", 151);
	Bureaucrat b0002("Johnson atLowerlimitson", 150);
	Bureaucrat b0003("Johnson atHigherlimitson", 1);

	Bureaucrat b0005 ( b0000 );

	Bureaucrat b0006 = b0000;

	std::cout << b0001 << std::endl;
	std::cout << b0005 << std::endl;
	std::cout << b0006 << std::endl;

	--b0002;
	++b0003;
	
	std::cout << b0002 << std::endl;
	std::cout << b0003 << std::endl;
	
	return (0);
}
