/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 12:13:37 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/12 14:13:31 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>
#include <exception>

class Form {

private:

	const std::string 	_name;
	bool				_signed;
	const int			_required_grade_sign;
	const int			_required_grade_exec;

public:

	Form( void );
	~Form( void );
	Form( const Form &obj );
	Form( std::string name, int required_grade_sign, int required_grade_exec );
	Form& operator= ( const Form &obj );

	std::string		getName(void) const;
	bool			getSignedStatus(void) const;
	int				getRequiredGradeSign(void) const;
	int				getRequiredGradeExec(void) const;
	void			setSignedStatusTrue(void);
	void			beSigned(const Bureaucrat& b);


	class GradeTooHighException : public std::exception
	{

	public:

		const char * what () const throw ()
		{
			return ("'GradeTooHighException': grade must be an integer between 0 and 151");
		}

	};

	class GradeTooLowException : public std::exception
	{

	public:

		const char * what () const throw ()
		{
			return ("'GradeTooLowException': grade must be an integer between 0 and 151");
		}

	};

};

std::ostream& operator<< (std::ostream& out, const Form &obj );

#endif