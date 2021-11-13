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
#include <exception>

class Form;

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

	std::string		getName(void) const;
	int				getGrade(void) const;

	void			signForm(Form *f) const;
	void			executeForm(Form const & form);

	class GradeTooHighException : public std::exception
	{

	public:

		const char * what () const throw ();

	};

	class GradeTooLowException : public std::exception
	{

	public:

		const char * what () const throw ();

	};

	class FormNotSignedException : public std::exception
	{

	public:

		const char * what () const throw ();

	};

};

std::ostream& operator<< (std::ostream& out, const Bureaucrat &obj );

#endif