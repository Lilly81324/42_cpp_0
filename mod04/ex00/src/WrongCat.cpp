/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 14:10:17 by sikunne           #+#    #+#             */
/*   Updated: 2025/06/10 14:10:18 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

WrongCat::WrongCat( void ): WrongAnimal()
{
	std::cout << "Default WrongCat Constructor" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat( const std::string& type ): WrongAnimal()
{
	std::cout << "Parameterized WrongCat Constructor" << std::endl;
	this->type = "WrongCat";
	(void)type;
}

WrongCat::WrongCat( const WrongCat& other ): WrongAnimal()
{
	std::cout << "Copy WrongCat Constructor" << std::endl;
	this->type = other.type;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat Deconstructor" << std::endl;
}

WrongCat& WrongCat::operator=( const WrongCat& other )
{
	std::cout << "WrongCat Assignement Operator" << std::endl;
	this->type = other.type;
	return (*this);
}

void WrongCat::makeSound( void ) const
{
	std::cout << "*meeooow*" << std::endl;
}