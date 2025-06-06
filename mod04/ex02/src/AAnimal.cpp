/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:42:51 by sikunne           #+#    #+#             */
/*   Updated: 2025/06/04 13:42:51 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AAnimal.hpp"

AAnimal::AAnimal( void )
{
	std::cout << "Default AAnimal Constructor" << std::endl;
	this->type = "unset";
}

AAnimal::AAnimal( const std::string& type )
{
	std::cout << "Normal AAnimal Constructor" << std::endl;
	this->type = type;
}

AAnimal::AAnimal( const AAnimal& other )
{
	std::cout << "Copy AAnimal Constructor" << std::endl;
	this->type = other.type;
}

AAnimal::~AAnimal( void )
{
	std::cout << "AAnimal Destructor" << std::endl;
}

const AAnimal& AAnimal::operator=( const AAnimal& other )
{
	std::cout << "AAnimal Asignement Operator" << std::endl;
	this->type = other.type;
	return (*this);
}

void AAnimal::makeSound( void ) const
{
	std::cout << "*Indistinguishable Noises*" << std::endl;
}

const std::string& AAnimal::getType( void ) const
{
	return(this->type);
}