/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:34:02 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/13 13:37:13 by mbarut           ###   ########.fr       */
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
	
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	someRandomIntern.deleteForm(rrf);
	return (0);
}
