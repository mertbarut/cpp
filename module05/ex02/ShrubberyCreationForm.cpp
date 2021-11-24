/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:07:53 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/12 14:53:44 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include <string>
#include <iostream>
#include <fstream>
#include <exception>

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	std::cout << "A ShrubberyCreationForm has disappeared!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form( target, "Shrubbery Creation Form", 145, 137 )
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
	std::cout << "Custom constructor for class ShrubberyCreationForm is called!" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator= ( const ShrubberyCreationForm &obj )
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
	std::cout << "Assignment operator overload for class ShrubberyCreationForm is used!" << std::endl;
	return (*this);
}

void	ShrubberyCreationForm::execute(const Bureaucrat& b) const
{
	try
	{
		if (this->getSignedStatus() == false)
			throw FormNotSignedException();
		else if (this->getRequiredGradeExec() < b.getGrade())
			throw GradeTooLowException();
		else
		{
			std::ofstream	ofs;
			ofs.open(this->getTarget() + "_shrubbery");
			ofs <<
				"      %%%,%%%%%%%" << 			std::endl <<
				"       ,'%% \\\\-*%%%%%%%" << 	std::endl <<
				" ;%%%%%*%   _%%%%\"" <<		std::endl <<
				"  ,%%%       \\(_.*%%%%." <<	std::endl <<
				"  % *%%, ,%%%%*(    '" <<		std::endl <<
				"%^     ,*%%% )\\|,%%*%,_" <<	std::endl <<
				"     *%    \\/ #).-\"*%%*" <<	std::endl <<
				"         _.) ,/ *%," <<		std::endl <<
				"_________/)#(_____________" <<	std::endl;
			ofs.close();
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