/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 14:06:57 by sikunne           #+#    #+#             */
/*   Updated: 2025/06/10 14:20:56 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"
#include "../inc/Brain.hpp"

Dog::Dog( void ): AAnimal( )
{
	std::cout << "Default Dog Constructor" << std::endl;
	this->type = "Dog";
	this->brain = new Brain("walkies");

}

Dog::Dog( const std::string& type ): AAnimal( )
{
	std::cout << "Parameterized Dog Constructor" << std::endl;
	this->type = "Dog";
	this->brain = new Brain("walkies");
	(void)type;
}

Dog::Dog( const Dog& other ): AAnimal( )
{
	std::cout << "Copy Dog Constructor" << std::endl;
	this->type = other.type;
	this->brain = new Brain(*(other.brain));
}

Dog::~Dog( void )
{
	delete this->brain;
	std::cout << "Dog Deconstructor" << std::endl;
}

Dog& Dog::operator=( const Dog& other )
{
	std::cout << "Dog Assignement Operator" << std::endl;
	this->type = other.type;
	delete this->brain;
	this->brain = new Brain(*(other.brain));
	return (*this);
}

void Dog::makeSound( void ) const
{
	std::cout << "*woof* *bark*" << std::endl;
}

const std::string& Dog::getType( void ) const
{
	return (this->type);
}