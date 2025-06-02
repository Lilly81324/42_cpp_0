/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 16:58:04 by sikunne           #+#    #+#             */
/*   Updated: 2025/06/02 18:16:25 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap( void ): ClapTrap()
{
	std::cout << "ScavTrap Default Constructor called" << std::endl;
	this->health = 100;
	this->energy = 50;
	this->dmg = 20;
}

ScavTrap::ScavTrap( std::string name ): ClapTrap(name)
{
	std::cout << "ScavTrap Normal Constructor called" << std::endl;
	this->name = name;
	this->health = 100;
	this->energy = 50;
	this->dmg = 20;
}

ScavTrap::ScavTrap( const ScavTrap& other ): ClapTrap(other)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	this->name = other.name;
	this->health = other.health;
	this->energy = other.energy;
	this->dmg = other.dmg;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& other )
{
	std::cout << "ScavTrap Copy Asignement Operator called" << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		this->health = other.health;
		this->energy = other.energy;
		this->dmg = other.dmg;
	}
	return (*this);
}

void ScavTrap::guardGate( void )
{
	if (this->health <= 0)
	{
		std::cout << "ScavTrap " << this->name << " is too ded to guard anything" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->name;
	std::cout << " is not letting you past the gate" <<  std::endl;
}

void ScavTrap::attack( std::string target )
{
	if (this->health <= 0)
	{
		std::cout << "ScavTrap " << this->name << " is too ded to attack" << std::endl;
		return ;
	}
	if (this->energy <= 0)
	{
		std::cout << "ScavTrap " << this->name << " is too tired to attack" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target;
	std::cout << " dealing " << this->dmg << " damage" << std::endl;
	this->energy--;
}