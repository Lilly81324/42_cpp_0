/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:35:31 by sikunne           #+#    #+#             */
/*   Updated: 2025/06/02 17:45:07 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

FragTrap::FragTrap( void ): ClapTrap()
{
	std::cout << "FragTrap Default Constructor called" << std::endl;
	this->health = 100;
	this->energy = 100;
	this->dmg = 30;
}

FragTrap::FragTrap( std::string name ): ClapTrap(name)
{
	std::cout << "FragTrap Normal Constructor called" << std::endl;
	this->name = name;
	this->health = 100;
	this->energy = 100;
	this->dmg = 30;
}

FragTrap::FragTrap( const FragTrap& other ): ClapTrap(other)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	this->name = other.name;
	this->health = other.health;
	this->energy = other.energy;
	this->dmg = other.dmg;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap& FragTrap::operator=( const FragTrap& other )
{
	std::cout << "FragTrap Copy Asignement Operator called" << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		this->health = other.health;
		this->energy = other.energy;
		this->dmg = other.dmg;
	}
	return (*this);
}

void FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << this->name;
	std::cout << " wants to give a high five, who will take it?" <<  std::endl;
}

void FragTrap::attack( std::string target )
{
	if (this->health <= 0)
	{
		std::cout << "FragTrap " << this->name << " is too ded to attack" << std::endl;
		return ;
	}
	if (this->energy <= 0)
	{
		std::cout << "FragTrap " << this->name << " is too tired to attack" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->name << " attacks " << target;
	std::cout << " dealing " << this->dmg << " damage" << std::endl;
	this->energy--;
}