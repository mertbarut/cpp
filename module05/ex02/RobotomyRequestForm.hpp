/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:07:43 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/23 13:51:31 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <string>
#include <iostream>
#include <exception>

class RobotomyRequestForm : public Form {

public:

	RobotomyRequestForm( void );
	~RobotomyRequestForm( void );
	RobotomyRequestForm( const RobotomyRequestForm &obj );
	RobotomyRequestForm( std::string target );
	RobotomyRequestForm& operator= ( const RobotomyRequestForm &obj );

	void	execute(const Bureaucrat& b) const ;

};

#endif