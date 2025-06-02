/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:09:49 by sikunne           #+#    #+#             */
/*   Updated: 2025/06/02 17:46:55 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

int main(void)
{
	FragTrap clappy("Clappy");
	FragTrap happy("Happy");
	FragTrap scrappy("Scrappy");
	std::cout << std::endl;

	scrappy.highFivesGuys();
	scrappy.takeDamage(500);
	scrappy.highFivesGuys();
	std::cout << std::endl;
	
	clappy.attack("Happy");
	happy.takeDamage(20);
	happy.attack("Clappy");
	clappy.takeDamage(20);
	clappy.attack("Happy");
	happy.takeDamage(20);
	happy.beRepaired(69);
	std::cout << std::endl;

	for (int i = 0; i < 99; i++)
		clappy.beRepaired(1000);
	clappy.attack("the ground");
	std::cout << std::endl;
	return (0);
}