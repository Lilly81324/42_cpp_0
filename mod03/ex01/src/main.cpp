/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:09:49 by sikunne           #+#    #+#             */
/*   Updated: 2025/06/02 17:48:02 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

int main(void)
{
	ScavTrap clappy("Clappy");
	ScavTrap happy("Happy");
	ScavTrap scrappy("Scrappy");
	std::cout << std::endl;

	scrappy.guardGate();
	scrappy.takeDamage(500);
	scrappy.guardGate();
	std::cout << std::endl;
	
	clappy.attack("Happy");
	happy.takeDamage(20);
	happy.attack("Clappy");
	clappy.takeDamage(20);
	clappy.attack("Happy");
	happy.takeDamage(20);
	happy.beRepaired(69);
	std::cout << std::endl;

	for (int i = 0; i < 49; i++)
		clappy.beRepaired(1000);
	clappy.attack("the wall");
	std::cout << std::endl;
	return (0);
}