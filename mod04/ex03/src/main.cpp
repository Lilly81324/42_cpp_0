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


// Materia in Players and in Source is deleted properly on end of programm
// 

int main()
{
	AMateria * ice = new Ice;
	AMateria * cure = new Cure;
	if (DEBUG) std::cout << std::endl;

	ICharacter * cid = new Character("Cid Garlond");
	ICharacter * nero = new Character("Nero tol Scaeva");
	if (DEBUG) std::cout << std::endl;

	IMateriaSource* library = new MateriaSource;
	if (DEBUG) std::cout << std::endl;

	library->learnMateria(new Ice);
	library->learnMateria(new Cure);
	if (DEBUG) std::cout << std::endl;

	nero->equip(ice);
	nero->equip(library->createMateria("ice"));
	cid->equip(cure);
	cid->equip(library->createMateria("cure"));
	if (DEBUG) std::cout << std::endl;

	nero->use(0, *cid);
	cid->use(1, *cid);
	if (DEBUG) std::cout << "==Edge Cases==" << std::endl;

	nero->use(-1, *cid);
	nero->use(5, *cid);
	nero->use(3, *cid);
	nero->unequip(-2);
	nero->unequip(3);
	nero->unequip(5);
	if (DEBUG) std::cout << std::endl;

	library->learnMateria(NULL);
	delete library->createMateria("Nonsense"); 
	if (DEBUG) std::cout << std::endl;
	
	delete library;
	delete cid;
	delete nero;
	return (0);
}
