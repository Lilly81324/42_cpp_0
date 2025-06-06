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

int main()
{
	AMateria * icemat = new Ice;
	AMateria * curemat = new Cure;
	ICharacter* chad = new Character("Chad");
	ICharacter* steve = new Character("Steve");

	chad->equip(icemat);
	chad->equip(icemat->clone());
	chad->equip(curemat);
	chad->equip(curemat->clone());
	
	chad->use(0, *steve);
	// chad->unequip(0);
	delete chad;
	delete steve;
	return (0);
}

// If Original Materia new -> delete
// If Materia cloned -> delete
// ! Stack Materia, Copied Materia

// Make a Character class
// A ICharacter has an invectory, which holds up to 4 materia
// A AMateria class exists, and is the base for Ice Materia class and Cure Materia class