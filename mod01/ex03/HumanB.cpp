/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 15:31:51 by sikunne           #+#    #+#             */
/*   Updated: 2025/05/22 15:31:51 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( const std::string& name )
{
	this->name = name;
	this->weapon = NULL;
	std::cout << name << " enters the fight unarmed" << std::endl;
}

HumanB::~HumanB( void )
{
	std::cout << name << " leaves the fight" << std::endl;
}

void HumanB::attack( void )
{
	if (this->weapon == NULL)
	{
		std::cout << this->name << " is attacking unarmed" << std::endl;
	}
	else
	{
		std::cout << this->name << " attacks with their [";
		std::cout << this->weapon->getType() << "]" <<  std::endl;
	}
}

void HumanB::setWeapon( Weapon &weapon )
{
	this->weapon = &weapon;
	std::cout << name << " arms themself with a [";
	std::cout << weapon.getType() << "]" << std::endl;
}