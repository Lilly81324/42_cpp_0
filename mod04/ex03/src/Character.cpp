/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 15:40:09 by sikunne           #+#    #+#             */
/*   Updated: 2025/06/06 17:03:20 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Character.hpp"

Character::Character( void )
{
	std::cout << "Default Character Constructor" << std::endl;
	this->name = "Unknown Mage";
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character( const std::string& name )
{
	std::cout << "Parameterized Character Constructor" << std::endl;
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character( const Character& other )
{
	std::cout << "Copy Character Constructor" << std::endl;
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
	std::cout << "Character Deconstructor" << std::endl;
}

Character& Character::operator=( const Character& other )
{
	std::cout << "Character Assignement Operator" << std::endl;
	this->name = other.name;
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
	if (i >= 4)
	{
		std::cout << this->name << " has no Inventory space. The " << m->getType();
		std::cout << " Materia was dropped" << std::endl;
		return ;
	}
	this->inventory[i] = m;
	std::cout << this->name << " equipped " << m->getType();
	std::cout << " Materia in slot " << i << "/3" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 4 || idx < 0)
	{
		std::cout << "Slot " << idx << " is outside your inventory (0-3)" << std::endl;
		return ;
	}
	if (this->inventory[idx] == NULL)
	{
		std::cout << "Slot " << idx << " is already empty" << std::endl;
		return ;
	}
	this->inventory[idx] = NULL;
	std::cout << this->name << " unequipped Materia from slot " << idx << "/3" << std::endl;
}
		
void Character::use(int idx, ICharacter& target)
{
	if (idx >= 4 || idx < 0)
	{
		std::cout << "Slot " << idx << " is outside your inventory (0-3)" << std::endl;
		return ;
	}
	if (this->inventory[idx] == NULL)
	{
		std::cout << "Slot " << idx << " is empty" << std::endl;
		return ;
	}
	this->inventory[idx]->use(target);
}