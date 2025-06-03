/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:09:49 by sikunne           #+#    #+#             */
/*   Updated: 2025/06/03 15:57:01 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

int main(void)
{
	DiamondTrap shiny("Shiny");
	std::cout << std::endl;

	shiny.takeDamage(99);
	shiny.attack("Rusty");
	shiny.whoAmI();
	std::cout << std::endl;
	
	for (int i = 0; i < 50; i++)
	{
		std::cout << "Attack-" << 2+i << "	";
		shiny.attack("Rusty");
	}
	shiny.beRepaired(5);
	std::cout << std::endl;

	shiny.takeDamage(1);
	shiny.beRepaired(5);
	std::cout << std::endl;

	return(0);
}