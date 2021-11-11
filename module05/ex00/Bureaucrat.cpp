/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:39:20 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/11 13:57:03 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

Bureaucrat::Bureaucrat( void ) : _name("NULL"), _grade(150)
{
	std::cout << "A Bureaucrat has appeared!" << std::endl;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << "An Bureaucrat has disappeared!" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
	*this = obj;
	std::cout << "Copy constructor for class Bureaucrat is called!" << std::endl;
}

Bureaucrat::Bureaucrat(	std::string name, int grade )  : _name(name), _grade(grade)
{
	std::cout << "Custom constructor for class Bureaucrat is called!" << std::endl;
}

Bureaucrat& Bureaucrat::operator= ( const Bureaucrat &obj )
{
	if (this != &obj)
		*this = Bureaucrat(obj._name, obj._grade);
	std::cout << "Assignment operator overload for class Bureaucrat is used!" << std::endl;
	return (*this);
}

std::string Bureaucrat::getName( void ) const
{
	return (this->_name);
}

int Bureaucrat::getGrade( void ) const
{
	return (this->_grade);
}

Bureaucrat&	Bureaucrat::operator++ () { _grade-- ; return *this; }
Bureaucrat&	Bureaucrat::operator-- () { _grade++ ; return *this; }
Bureaucrat	Bureaucrat::operator++ ( int ) { Bureaucrat tmp = *this; --*this; return tmp; }
Bureaucrat	Bureaucrat::operator-- ( int ) { Bureaucrat tmp = *this; ++*this; return tmp; }

std::ostream& operator<< (std::ostream& out, const Bureaucrat &obj )
{
	out << "<" << obj.getName() << ">, bureaucrat grade: " << obj.getGrade(); 
	return (out);
}
