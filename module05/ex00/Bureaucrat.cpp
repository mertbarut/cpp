/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:39:20 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/11 18:47:51 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>
#include <exception>

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

Bureaucrat::Bureaucrat(	std::string name, int grade ) : _name(name)
{
	try
	{
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			_grade = grade;;
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << "Custom constructor for class Bureaucrat is called!" << std::endl;
}

Bureaucrat& Bureaucrat::operator= ( const Bureaucrat &obj )
{
	if (this != &obj)
	{
		try
		{
			if (obj._grade > 150)
				throw Bureaucrat::GradeTooLowException();
			else if (obj._grade < 1)
				throw Bureaucrat::GradeTooHighException();
			else
				*this = Bureaucrat(obj._name, obj._grade);
		}
		catch (Bureaucrat::GradeTooLowException& e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException& e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	}
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

Bureaucrat&	Bureaucrat::operator++ ()
{
	try
	{
		if (_grade - 1 < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			_grade-- ;
		return *this;
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
		return *this;
	}
	return *this;
}

Bureaucrat&	Bureaucrat::operator-- ()
{
	try
	{
		if (_grade + 1 > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			_grade++ ;
		return *this;
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
		return *this;
	}
}

std::ostream& operator<< (std::ostream& out, const Bureaucrat &obj )
{
	out << "<" << obj.getName() << ">, bureaucrat grade: " << obj.getGrade(); 
	return (out);
}
