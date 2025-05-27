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

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon )
{
	this->name = name;
	this->weapon = &weapon;
	std::cout << name << " enters the fight with a [";
	std::cout << this->weapon->getType() << "]" << std::endl;
}

HumanA::~HumanA( void )
{
	std::cout << name << " leaves the fight" << std::endl;
}

void HumanA::attack( void )
{
	std::cout << this->name << " attacks with their [";
	std::cout << this->weapon->getType() << "]" << std::endl;
}
