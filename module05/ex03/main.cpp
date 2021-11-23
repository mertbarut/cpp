/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:34:02 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/23 14:02:29 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include <string>
#include <iostream>
#include <type_traits>

int main( void )
{
	Intern	someRandomIntern;
	Form	*rrf;

	Bureaucrat b0000("Johnson Johnson", 33);
	
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << *rrf << std::endl;

	b0000.signForm(*rrf);
	b0000.executeForm(*rrf);
	someRandomIntern.deleteForm(rrf);
	return (0);
}
