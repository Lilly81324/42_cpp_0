/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:42:51 by sikunne           #+#    #+#             */
/*   Updated: 2025/06/04 13:42:51 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal( void )
{
	std::cout << "Default Animal Constructor" << std::endl;
	this->type = "unset";
}

Animal::Animal( const std::string& type )
{
	std::cout << "Normal Animal Constructor" << std::endl;
	this->type = type;
}

Animal::Animal( const Animal& other )
{
	std::cout << "Copy Animal Constructor" << std::endl;
	this->type = other.type;
}

Animal::~Animal( void )
{
	std::cout << "Animal Destructor" << std::endl;
}

const Animal& Animal::operator=( const Animal& other )
{
	std::cout << "Animal Asignement Operator" << std::endl;
	this->type = other.type;
	return (*this);
}

void Animal::makeSound( void ) const
{
	std::cout << "*Indistinguishable Noises*" << std::endl;
}

const std::string& Animal::getType( void ) const
{
	return(this->type);
}