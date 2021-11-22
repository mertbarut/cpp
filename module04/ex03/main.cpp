/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:57:08 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/22 21:53:50 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>
#include <string>

int main(void)
{
	IMateriaSource* src = new MateriaSource;
	AMateria *ice = new Ice;
	AMateria *cure = new Cure;
	src->learnMateria(ice);
	src->learnMateria(cure);

	ICharacter* I = new Character("I");

	AMateria* tmp1;
	AMateria* tmp2;
	tmp1 = src->createMateria("ice");
	I->equip(tmp1);
	tmp2 = src->createMateria("cure");
	I->equip(tmp2);
	
	ICharacter* bob = new Character("bob");

	I->use(0, *bob);
	I->use(1, *bob);

	delete bob;
	delete I;
	delete src;
	delete ice;
	delete cure;
	delete tmp1;
	delete tmp2;

	return 0;
}
