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

#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

#define ZOOSIZE 5

int main()
{
	std::cout << "||---Direct Animal Creation---||\n";
	// Directly creating Animals
	{
		const AAnimal* j = new Dog();
		const AAnimal* i = new Cat();
		j->makeSound();
		i->makeSound();
		delete j;
		delete i;
	}
	std::cout << "||---Direct Animal Array Creation---||\n";
	// Directly creating Animal Array with objects
	// {
	// 	AAnimal zoo[ZOOSIZE];
	// 	for (int i = 0; i < ZOOSIZE; i++)
	// 		zoo[i].makeSound();
	// }
	std::cout << "||---Indirect Animal Array Creation---||\n";
	// Indirectly creating Animal Array, then assigning them later
	{
		AAnimal *zoo[ZOOSIZE];
		for (int i = 0; i < (ZOOSIZE / 2); i++)
			zoo[i] = new Dog();
		for (int i = (ZOOSIZE / 2); i < ZOOSIZE; i++)
			zoo[i] = new Cat();
		for (int i = 0; i < ZOOSIZE; i++)
			zoo[i]->makeSound();
		for (int i = 0; i < ZOOSIZE; i++)
			delete zoo[i];
	}
}
