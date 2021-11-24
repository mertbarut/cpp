/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:07:31 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/24 13:13:41 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>
#include <iostream>
#include <exception>
#include <cstdlib>
#include <ctime>

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	std::cout << "A Robotomy Request Form has disappeared!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form( target, "Presidential Pardon Form", 25, 5 )
{
	try
	{
		if (this->getRequiredGradeSign() > 150 || this->getRequiredGradeSign() > 150
		|| this->getRequiredGradeExec() > 150 || this->getRequiredGradeExec() > 150)
			throw GradeTooLowException();
		else if (this->getRequiredGradeSign() < 1 || this->getRequiredGradeSign() < 1
		|| this->getRequiredGradeExec() < 1 || this->getRequiredGradeExec() < 1)
			throw GradeTooHighException();
	}
	catch (GradeTooLowException& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	catch (GradeTooHighException& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << "Custom constructor for class Robotomy Request Form is called!" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator= ( const PresidentialPardonForm &obj )
{
	if (this != &obj)
	{
		try
		{
			if (this->getRequiredGradeSign() > 150 || this->getRequiredGradeSign() > 150
			|| this->getRequiredGradeExec() > 150 || this->getRequiredGradeExec() > 150)
				throw GradeTooLowException();
			else if (this->getRequiredGradeSign() < 1 || this->getRequiredGradeSign() < 1
			|| this->getRequiredGradeExec() < 1 || this->getRequiredGradeExec() < 1)
				throw GradeTooHighException();
			else
				this->getTarget() = obj.getTarget();
		}
		catch (GradeTooLowException& e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
		catch (GradeTooHighException& e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	}
	std::cout << "Assignment operator overload for class Presidential Pardon Form is used!" << std::endl;
	return (*this);
}

void	PresidentialPardonForm::execute(const Bureaucrat& b) const
{
	try
	{
		if (this->getSignedStatus() == false)
			throw FormNotSignedException();
		else if (this->getRequiredGradeExec() < b.getGrade())
			throw GradeTooLowException();
		else
			std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
	}
	catch (GradeTooLowException& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	catch (GradeTooHighException& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
}