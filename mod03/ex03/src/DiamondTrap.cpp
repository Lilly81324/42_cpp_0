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
 ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")
{
	this->name = "Unnamed";
	this->health = this->FragTrap::health;
	this->energy = this->ScavTrap::energy;
	this->dmg = this->FragTrap::dmg;
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ): 
 ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")
{
	this->name = name;
	this->health = this->FragTrap::health;
	this->energy = this->ScavTrap::energy;
	this->dmg = this->FragTrap::dmg;
	std::cout << "DiamondTrap Normal Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& other ): 
 ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")
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

void DiamondTrap::attack( const std::string& name )
{
	this->ScavTrap::attack(name);
}