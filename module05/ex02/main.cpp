/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:34:02 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/23 13:47:32 by mbarut           ###   ########.fr       */
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
	std::string divider = "*******************************";

	Bureaucrat b0000("Johnson Johnson", 2);
	Bureaucrat b0001("Johnson Pohnson", 62);
	Bureaucrat b0002("Johnson Vohnson", 140);
	std::cout << b0000 << std::endl;
	std::cout << b0001 << std::endl;
	std::cout << b0002 << std::endl;

	std::cout << divider << std::endl;
	
	ShrubberyCreationForm scf00( "home" );
	std::cout << scf00 << std::endl;
	b0002.signForm(scf00);
	b0001.executeForm(scf00);

	std::cout << divider << std::endl;

	RobotomyRequestForm rrf00( "Some poor soul" );
	std::cout << rrf00 << std::endl;
	b0001.signForm(rrf00);
	b0000.executeForm(rrf00);

	std::cout << divider << std::endl;

	PresidentialPardonForm ppf00( "Mark Zuckerberg" );
	std::cout << scf00 << std::endl;
	b0000.signForm(ppf00);
	b0000.executeForm(ppf00);

	std::cout << divider << std::endl;

	return (0);
}
