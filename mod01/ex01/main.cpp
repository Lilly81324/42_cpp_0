/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 17:46:29 by sikunne           #+#    #+#             */
/*   Updated: 2025/05/21 18:06:37 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#define COUNT 5

int	main(void)
{
	Zombie* horde;

	horde = zombieHorde(COUNT, "Bob");
	for (int i = 0; i < COUNT; i++)
		(horde[i]).announce();
	delete[] horde;
	return (0);
}