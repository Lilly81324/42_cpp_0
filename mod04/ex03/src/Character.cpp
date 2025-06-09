/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 15:40:09 by sikunne           #+#    #+#             */
/*   Updated: 2025/06/09 17:37:34 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Character.hpp"

Character::Character( void )
{
	if (DEBUG) std::cout << "Default Character Constructor" << std::endl;
	this->name = "Unknown Mage";
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character( const std::string& name )
{
	if (DEBUG) std::cout << "Parameterized Character Constructor" << std::endl;
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character( const Character& other )
{
	if (DEBUG) std::cout << "Copy Character Constructor" << std::endl;
	this->name = other.name;
	for (int i = 0; i < 4; i++)
	{
		if (other.inventory[i] == NULL)
			this->inventory[i] = NULL;
		else
			this->inventory[i] = other.inventory[i]->clone();
	}
}

Character::~Character( void )
{
	for (int i = 0; i < 4; i++)
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
	if (DEBUG) std::cout << "Character Deconstructor" << std::endl;
}

Character& Character::operator=( const Character& other )
{
	if (DEBUG) std::cout << "Character Assignement Operator" << std::endl;
	this->name = other.name;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] != NULL)
		{
			delete this->inventory[i];
			this->inventory[i] = NULL;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (other.inventory[i] == NULL)
			this->inventory[i] = NULL;
		else
			this->inventory[i] = other.inventory[i]->clone();
	}
	return(*this);
}

std::string const & Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	int i = 0;

	while (i < 4 && this->inventory[i] != NULL)
		i++;
	if (DEBUG && i >= 4)
	{
		std::cout << this->name << " has no Inventory space. The " << m->getType();
		std::cout << " Materia was dropped" << std::endl;
		return ;
	}
	this->inventory[i] = m;
	if (DEBUG) std::cout << this->name << " equipped " << m->getType();
	if (DEBUG) std::cout << " Materia in slot " << i << "/3" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 4 || idx < 0)
	{
		if (DEBUG) std::cout << "Slot " << idx << " is outside your inventory (0-3)" << std::endl;
		return ;
	}
	if (this->inventory[idx] == NULL)
	{
		if (DEBUG) std::cout << "Slot " << idx << " is already empty" << std::endl;
		return ;
	}
	this->inventory[idx] = NULL;
	if (DEBUG) std::cout << this->name << " unequipped Materia from slot " << idx << "/3" << std::endl;
}
		
void Character::use(int idx, ICharacter& target)
{
	if (idx >= 4 || idx < 0)
	{
		if (DEBUG) std::cout << "Slot " << idx << " is outside your inventory (0-3)" << std::endl;
		return ;
	}
	if (this->inventory[idx] == NULL)
	{
		if (DEBUG) std::cout << "Slot " << idx << " is empty" << std::endl;
		return ;
	}
	this->inventory[idx]->use(target);
}