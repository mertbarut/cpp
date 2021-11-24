/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 12:10:21 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/24 13:19:17 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>
#include <iostream>
#include <exception>

Intern::Intern( void )
{
	std::cout << "An Intern has appeared!" << std::endl;
}

Intern::~Intern( void )
{
	std::cout << "An Intern has disappeared!" << std::endl;
}

Intern::Intern(const Intern &obj)
{
	(void)obj;
	std::cout << "Copy constructor for class Intern is called!" << std::endl;
}

Intern& Intern::operator= ( const Intern &obj )
{
	(void)obj;
	std::cout << "Assignment operator overload for class Intern is used!" << std::endl;
	return (*this);
}

Form	*Intern::makeShrubberyCreationForm( std::string target )
{
	ShrubberyCreationForm	*f_ptr = new ShrubberyCreationForm(target);
	return (f_ptr);
}

Form	*Intern::makeRobotomyRequestForm( std::string target )
{
	RobotomyRequestForm		*f_ptr = new RobotomyRequestForm(target);
	return (f_ptr);
}

Form	*Intern::makePresidentialPardonForm( std::string target )
{
	PresidentialPardonForm	*f_ptr = new PresidentialPardonForm(target);
	return (f_ptr);
}

Form	*Intern::makeForm( std::string requested_form, std::string requested_target )
{
	f_ptr		f_ptrs[3] = {&Intern::makeShrubberyCreationForm, &Intern::makeRobotomyRequestForm, &Intern::makePresidentialPardonForm};
	std::string	forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form		*f_ptr = NULL;

	for (int i = 0; i < 3; i++)
	{
		if (forms[i] == requested_form)
			switch (i)
			{
				case 0:
				{
					std::cout << "Intern creates a " << forms[0] << std::endl;
					return f_ptr = (this->*f_ptrs[0])( requested_target );
				}
				case 1:
				{
					std::cout << "Intern creates a " << forms[1] << std::endl;
					return f_ptr = (this->*f_ptrs[1])( requested_target );
				}
				case 2:
				{
					std::cout << "Intern creates a " << forms[2] << std::endl;
					return f_ptr = (this->*f_ptrs[2])( requested_target );
				}
			}
		else
			continue ;
	}
	return f_ptr;
}

void	Intern::deleteForm( Form *form )
{
	if (form != NULL)
		delete form;
}