/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 16:03:02 by sikunne           #+#    #+#             */
/*   Updated: 2025/05/22 16:03:02 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon clubA = Weapon("crude spiked club");
		HumanA bob("Bob", clubA);
		bob.attack();
		clubA.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon clubB = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(clubB);
		jim.attack();
		clubB.setType("some other type of club");
		jim.attack();
	}
	return 0;
}
