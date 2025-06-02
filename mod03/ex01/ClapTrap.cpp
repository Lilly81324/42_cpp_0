/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:33:49 by sikunne           #+#    #+#             */
/*   Updated: 2025/06/02 17:20:01 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ): name(""), health(10), energy(10), dmg(0)
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap( const std::string& name ): name(name), health(10), energy(10), dmg(0)
{
	std::cout << "ClapTrap Normal Constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& other )\
: name(other.name), health(other.health), energy(other.energy), dmg(other.dmg)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& other )
{
	std::cout << "ClapTrap Copy Asignement Operator called" << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		this->health = other.health;
		this->energy = other.energy;
		this->dmg = other.dmg;
	}
	return (*this);
}

void ClapTrap::attack( const std::string& target )
{
	if (this->health <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is too ded to attack" << std::endl;
		return ;
	}
	if (this->energy <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is too tired to attack" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target;
	std::cout << " dealing " << this->dmg << " damage" << std::endl;
	this->energy--;
}

void ClapTrap::takeDamage( unsigned int amount )
{
	if (this->health <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is already dead" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " gets hit for ";
	std::cout << amount << " damage" << std::endl;
	this->health -= amount;
	if (this->health <= 0)
	{
		std::cout << "ClapTrap " << this->name << " has died, how tragic" << std::endl;
		this->health = 0;
	}
}

void ClapTrap::beRepaired( unsigned int amount )
{
	if (this->health <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is too ded to repair" << std::endl;
		return ;
	}
	if (this->energy <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is too tired to repair" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " heals itself for ";
	std::cout << amount << " Health Points, back to ";
	this->energy--;
	this->health += amount;
	std::cout << this->health << " Health" << std::endl;
}