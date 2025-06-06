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

#define ZOOSIZE 5

int main()
{
	{
		Ice mat;
		AMateria *newclone;

		std::cout << mat.getType() << std::endl;
		newclone = mat.clone();
		std::cout << newclone->getType() << std::endl;
		delete newclone;
	}
	{
		Cure mat;
		AMateria *newclone;

		std::cout << mat.getType() << std::endl;
		newclone = mat.clone();
		std::cout << newclone->getType() << std::endl;
		delete newclone;
	}
	return (0);
}

// Make a Character class
// A ICharacter has an invectory, which holds up to 4 materia
// A AMateria class exists, and is the base for Ice Materia class and Cure Materia class