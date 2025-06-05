/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:42:51 by sikunne           #+#    #+#             */
/*   Updated: 2025/06/04 13:42:51 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	std::cout << "Default WrongAnimal Constructor" << std::endl;
	this->type = "unset";
}

WrongAnimal::WrongAnimal( const std::string& type )
{
	std::cout << "Normal WrongAnimal Constructor" << std::endl;
	this->type = type;
}

WrongAnimal::WrongAnimal( const WrongAnimal& other )
{
	std::cout << "Copy WrongAnimal Constructor" << std::endl;
	this->type = other.type;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal Destructor" << std::endl;
}

const WrongAnimal& WrongAnimal::operator=( const WrongAnimal& other )
{
	std::cout << "WrongAnimal Asignement Operator" << std::endl;
	this->type = other.type;
	return (*this);
}

void WrongAnimal::makeSound( void ) const
{
	std::cout << "*Wrong Indistinguishable Noises*" << std::endl;
}

const std::string& WrongAnimal::getType( void ) const
{
	return(this->type);
}