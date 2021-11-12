/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:34:02 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/12 23:04:26 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <string>
#include <iostream>
#include <type_traits>

int main( void )
{
	Bureaucrat b0000("Johnson Johnson", 2);
	std::cout << b0000 << std::endl;

	//std::cout << f0000 << std::endl;
	PresidentialPardonForm ppf00( "Mark Zuckerberg" );
	b0000.signForm(&ppf00);
	b0000.executeForm(ppf00);
	//b0000.signForm(&f0000);
	//f0000.beSigned(b0000);

	return (0);
}
