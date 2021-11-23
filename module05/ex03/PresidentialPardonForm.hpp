/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:07:37 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/23 13:51:26 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <string>
#include <iostream>
#include <exception>

class PresidentialPardonForm : public Form {

public:

	PresidentialPardonForm( void );
	~PresidentialPardonForm( void );
	PresidentialPardonForm( const PresidentialPardonForm &obj );
	PresidentialPardonForm( std::string target );
	PresidentialPardonForm& operator= ( const PresidentialPardonForm &obj );

	void	execute(const Bureaucrat& b) const;

};

#endif