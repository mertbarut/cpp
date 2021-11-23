/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:07:40 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/23 13:51:14 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include <string>
#include <iostream>
#include <exception>
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	std::cout << "A Robotomy Request Form has disappeared!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form( target, "Robotomy Request Form", 72, 45 )
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

RobotomyRequestForm& RobotomyRequestForm::operator= ( const RobotomyRequestForm &obj )
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
	std::cout << "Assignment operator overload for class RobotomyRequestForm is used!" << std::endl;
	return (*this);
}

void	RobotomyRequestForm::execute(const Bureaucrat& b) const
{
	(void)b;
	try
	{
		if (this->getSignedStatus() == false)
			throw FormNotSignedException();
		else if (this->getRequiredGradeExec() < b.getGrade())
			throw GradeTooLowException();
		else
		{
			std::srand(std::time(nullptr));
			std::cout << " * DRRR DRRRRRRRRRRRRRR   DRRRRRRRRR  DRRRRRRRRRRRRR * " << std::endl;
			std::cout << " * DRRRRRRRR   TUT   BRRRRRRRRRRR   TUT   DRRRRRRRRR * " << std::endl;
			std::cout << " * DRRR TUTTUTTUT DRRRRRRRRRRR   DRRRRRRRRRRRRR  TUT * " << std::endl;
			int	rand = std::rand();
			if (rand % 2)
				std::cout << this->getTarget() << " has been robotomized successfully!" << std::endl;
			else
				std::cout << this->getTarget() << " has been robotomized unsuccessfully... :(" << std::endl;
		}
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