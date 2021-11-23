/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:39:20 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/23 13:16:56 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
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
			_grade = grade;
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

void Bureaucrat::signForm(Form& f) const
{
	if (this->getGrade() <= f.getRequiredGradeSign())
	{
		f.setSignedStatusTrue();
		std::cout << this->getName() << " signs " << f.getName() << std::endl;
	}
	else
	{
		std::cout << this->getName() << " cannot sign " << f.getName() << " because their grade is too low to sign this form" << std::endl;
	}
}

Bureaucrat&	Bureaucrat::operator++ ()
{
	try
	{
		if (this->getGrade() - 1 < 1)
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
		if (this->getGrade() + 1 > 150)
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

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("'GradeTooHighException': grade must be an integer between 0 and 151");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("'GradeTooLowException': grade must be an integer between 0 and 151");
}

const char * Bureaucrat::FormNotSignedException::what() const throw ()
{
	return ("'FormNotSignedException': form needs to previously signed by an adequate bureaucrat before action");
}

void			Bureaucrat::executeForm(Form const & form)
{
	try
	{
		if (this->getGrade() > form.getRequiredGradeExec())
			throw GradeTooLowException();
		else if (form.getSignedStatus() == false)
			throw FormNotSignedException();
		else
		{
			std::cout << this->getName() << " executes " << form.getName() << std::endl;
			form.execute(*this);
		}
	}
	catch (GradeTooLowException& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	catch (FormNotSignedException& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
}