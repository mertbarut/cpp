/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 12:10:18 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/13 13:34:40 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {

public:

	Intern( void );
	~Intern( void );
	Intern( const Intern &obj );
	Intern( std::string name, int grade );
	Intern& operator= ( const Intern &obj );

	typedef Form* (Intern::*f_ptr)( std::string target );

	Form	*makeShrubberyCreationForm( std::string target );
	Form	*makeRobotomyRequestForm( std::string target );
	Form	*makePresidentialPardonForm( std::string target );
	Form	*makeForm( std::string requested_form, std::string requested_target );
	void	deleteForm( Form *form );

};

#endif