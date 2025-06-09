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
	AMateria * icemat = new Ice;
	AMateria * curemat = new Cure;
	AMateria * loosemat = new Cure;
	MateriaSource library;
	library.learnMateria(icemat);
	library.learnMateria(curemat);
	delete icemat;
	delete curemat;
	ICharacter* chad = new Character("Chad");
	ICharacter* steve = new Character("Steve");

	chad->equip(loosemat);
	chad->equip(library.createMateria("ice"));
	chad->equip(library.createMateria("cure"));
	chad->equip(library.createMateria("cure"));
	
	chad->use(0, *steve);
	chad->unequip(0);
	delete loosemat;
	delete chad;
	delete steve;
	return (0);
}

// If Original Materia new -> delete
// If Materia cloned -> delete
// ! Stack Materia, Copied Materia

// If Materia is unequipped, what do you do with it?