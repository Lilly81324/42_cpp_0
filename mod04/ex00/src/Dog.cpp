/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 14:10:12 by sikunne           #+#    #+#             */
/*   Updated: 2025/06/10 14:10:13 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog( void ): Animal( )
{
	std::cout << "Default Dog Constructor" << std::endl;
	this->type = "Dog";
}

Dog::Dog( const std::string& type ): Animal( )
{
	std::cout << "Parameterized Dog Constructor" << std::endl;
	this->type = "Dog";
	(void)type;
}

Dog::Dog( const Dog& other ): Animal( )
{
	std::cout << "Copy Dog Constructor" << std::endl;
	this->type = other.type;
}

Dog::~Dog( void )
{
	std::cout << "Dog Deconstructor" << std::endl;
}

Dog& Dog::operator=( const Dog& other )
{
	std::cout << "Dog Assignement Operator" << std::endl;
	this->type = other.type;
	return (*this);
}

void Dog::makeSound( void ) const
{
	std::cout << "*woof* *bark*" << std::endl;
}