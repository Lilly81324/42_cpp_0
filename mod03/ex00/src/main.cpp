/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 18:01:05 by sikunne           #+#    #+#             */
/*   Updated: 2025/06/02 17:49:11 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int main(void)
{
	ClapTrap clappy("Clappy");
	ClapTrap rusty("Rusty");

	clappy.attack("Rusty");
	rusty.takeDamage(9);
	rusty.attack("Clappy");
	clappy.takeDamage(2);
	clappy.attack("Rusty");
	rusty.takeDamage(9);
	rusty.attack("Clappy");
	rusty.beRepaired(69);
	for (int i = 0; i < 11; i++)
		clappy.beRepaired(2);
	clappy.attack("Rustys carcass");
	return (0);
}