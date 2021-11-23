/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:07:57 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/23 13:51:35 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <string>
#include <iostream>
#include <exception>

class ShrubberyCreationForm : public Form {

public:

	ShrubberyCreationForm( void );
	~ShrubberyCreationForm( void );
	ShrubberyCreationForm( const ShrubberyCreationForm &obj );
	ShrubberyCreationForm( std::string target );
	ShrubberyCreationForm& operator= ( const ShrubberyCreationForm &obj );

	void	execute(const Bureaucrat& b) const;

};

#endif