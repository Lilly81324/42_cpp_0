/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:33:05 by sikunne           #+#    #+#             */
/*   Updated: 2025/06/04 13:33:05 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Ice.hpp"
#include "../inc/Cure.hpp"
#include "../inc/Character.hpp"
#include "../inc/MateriaSource.hpp"

int main()
{
	{
	AMateria * mat = new Cure;
	MateriaSource library;
	library.learnMateria(new Ice);
	library.learnMateria(new Cure);

	ICharacter* chad = new Character("Chad");
	ICharacter* steve = new Character("Steve");

	chad->equip(mat);
	chad->equip(library.createMateria("ice"));
	chad->equip(library.createMateria("cure"));
	chad->equip(library.createMateria("cure"));
	
	chad->use(0, *steve);
	chad->unequip(0);
	delete mat;
	delete chad;
	delete steve;
	}
	std::cout << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
	return (0);
}

// If Original Materia new -> delete
// If Materia cloned -> delete
// ! Stack Materia, Copied Materia

// If Materia is unequipped, what do you do with it?