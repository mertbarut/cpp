/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:21:29 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/25 16:53:15 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main(void)
{
	Base	*rand;
	C		obj_c;

	rand = generate();

	identify(rand);
	identify(0);
	identify(obj_c);
	delete rand;
	return (0);
}
