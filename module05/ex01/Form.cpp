/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 12:13:34 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/24 12:52:37 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <string>
#include <iostream>
#include <exception>

Form::Form( void ) : _name("NULL"), _signed(false), _required_grade_sign(150), _required_grade_exec(150)
{
	std::cout << "A Form has appeared!" << std::endl;
}

Form::~Form( void )
{
	std::cout << "A Form has disappeared!" << std::endl;
}

Form::Form(const Form &obj) : _name(obj._name), _signed(obj._signed), _required_grade_sign(obj._required_grade_sign), _required_grade_exec(obj._required_grade_exec)
{
	std::cout << "Copy constructor for class Form is called!" << std::endl;
}

Form::Form(	std::string name, int required_grade_sign, int required_grade_exec ) : _name(name), _signed(false), _required_grade_sign(required_grade_sign), _required_grade_exec(required_grade_exec)
{
	try
	{
		if (required_grade_sign > 150 || required_grade_exec > 150)
			throw Form::GradeTooLowException();
		else if (required_grade_sign < 1 || required_grade_exec < 1)
			throw Form::GradeTooHighException();
	}
	catch (Form::GradeTooLowException& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	catch (Form::GradeTooHighException& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << "Custom constructor for class Form is called!" << std::endl;
}

Form& Form::operator= ( const Form &obj )
{
	if (this != &obj)
	{
		try
		{
			if (obj._required_grade_sign > 150 || obj._required_grade_exec > 150)
				throw Form::GradeTooLowException();
			else if (obj._required_grade_sign < 1 || obj._required_grade_exec < 1)
				throw Form::GradeTooHighException();
			else
			{
				_signed = obj._signed;
			}
		}
		catch (Form::GradeTooLowException& e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
		catch (Form::GradeTooHighException& e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	}
	std::cout << "Assignment operator overload for class Form is used!" << std::endl;
	return (*this);
}

std::string Form::getName( void ) const
{
	return (this->_name);
}

int Form::getRequiredGradeSign(void) const
{
	return (this->_required_grade_sign);
}

int Form::getRequiredGradeExec(void) const
{
	return (this->_required_grade_exec);
}

bool Form::getSignedStatus(void) const
{
	return (this->_signed);
}

void Form::setSignedStatusTrue()
{
	this->_signed = true;
}

void Form::beSigned(const Bureaucrat& b)
{
	try
	{
		if (getSignedStatus() == true)
			std::cout << this->_name << " is already signed" << std::endl;
		else if (b.getGrade() > this->getRequiredGradeSign())
			throw Form::GradeTooLowException();
		else
			b.signForm(*this);
	}
	catch (Form::GradeTooLowException& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
}

std::ostream& operator<< (std::ostream& out, const Form &obj )
{
	out << std::boolalpha;
	out << obj.getName() << ", Signed: " << obj.getSignedStatus() << ", Minimum Required Grade for 'Sign': " << obj.getRequiredGradeSign() << ", Minimum Required Grade for 'Execute': " << obj.getRequiredGradeExec();
	return (out);
}

const char * Form::GradeTooHighException::what () const throw ()
{
	return ("'GradeTooHighException': grade must be or stay as an integer between 0 and 151");
}

const char * Form::GradeTooLowException::what () const throw ()
{
	return ("'GradeTooLowException': grade must be or stay as an integer between 0 and 151, or the form must be signed by a sufficient bureaucrat");
}
