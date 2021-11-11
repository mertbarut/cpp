/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:36:05 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/11 13:03:43 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <string>
#include <iostream>

class Bureaucrat {

private:

	const std::string 	_name;
	int					_grade;

public:

	Bureaucrat( void );
	~Bureaucrat( void );
	Bureaucrat( const Bureaucrat &obj );
	Bureaucrat( std::string name, int grade );
	Bureaucrat& operator= ( const Bureaucrat &obj );

	Bureaucrat&	operator++	() ;
	Bureaucrat&	operator--	() ;
	Bureaucrat	operator++	( int );
	Bureaucrat	operator--	( int );

	std::string		getName(void) const;
	int				getGrade(void) const;

};

std::ostream& operator<< (std::ostream& out, const Bureaucrat &obj );

#endif