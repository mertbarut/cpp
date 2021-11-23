/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:34:02 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/23 13:12:12 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <string>
#include <iostream>
#include <type_traits>

int main( void )
{
	Bureaucrat b0000("Johnson Johnson", 42);
	std::cout << b0000 << std::endl;

	Form 	f_tst;
	Form	f0000("Registration Form", 48, 12);
	Form	f0001("Resignation Form", 5, 42);

	std::cout << f0000 << std::endl;
	std::cout << f0001 << std::endl;

	b0000.signForm(f0000);
	f0000.beSigned(b0000);

	b0000.signForm(f0001);
	f0001.beSigned(b0000);

	return (0);
}
