/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 16:58:04 by sikunne           #+#    #+#             */
/*   Updated: 2025/06/02 17:45:46 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ):
	this->name = FragTrap::name;
	this->health = FragTrap::health;
	this->energy = ScavTrap::energy;
	this->dmg = FragTrap::dmg;
{
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ): ClapTrap(name)
{
	std::cout << "DiamondTrap Normal Constructor called" << std::endl;
	this->name = name + "_clap_name";
	this->health = FragTrap::health;
	this->energy = ScavTrap::energy;
	this->dmg = FragTrap::dmg;
}

DiamondTrap::DiamondTrap( const DiamondTrap& other ): ClapTrap(other)
{
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
	this->name = other.name;
	this->health = other.health;
	this->energy = other.energy;
	this->dmg = other.dmg;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=( const DiamondTrap& other )
{
	std::cout << "DiamondTrap Copy Asignement Operator called" << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		this->health = other.health;
		this->energy = other.energy;
		this->dmg = other.dmg;
	}
	return (*this);
}

void DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap " << this->name << " inherited from ";
	std::cout << ClapTrap::name << std::endl;
}

void DiamondTrap::attack( std::string target )
{
	if (this->health <= 0)
	{
		std::cout << "DiamondTrap " << this->name << " is too ded to attack" << std::endl;
		return ;
	}
	if (this->energy <= 0)
	{
		std::cout << "DiamondTrap " << this->name << " is too tired to attack" << std::endl;
		return ;
	}
	std::cout << "DiamondTrap " << this->name << " attacks " << target;
	std::cout << " dealing " << this->dmg << " damage" << std::endl;
	this->energy--;
}