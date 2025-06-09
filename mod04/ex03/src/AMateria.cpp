/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:05:31 by sikunne           #+#    #+#             */
/*   Updated: 2025/06/09 17:05:32 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp"
// #include "../inc/ICharacter.hpp"

//If no Default, can we call "Materia mat()" ?

AMateria::AMateria( void )
{
	std::cout << "Default AMateria Constructor" << std::endl;
}

AMateria::AMateria( std::string const & type )
{
	std::cout << "Parameterized AMateria Constructor" << std::endl;
	if (type == "ice")
		this->type = "ice";
	else if (type == "cure")
		this->type = "cure";
	else
		this->type = "invalid";
}

AMateria::AMateria( const AMateria& other )
{
	std::cout << "Copy AMateria Constructor" << std::endl;
	this->type = other.getType();
}

AMateria::~AMateria( void )
{
	std::cout << "AMateria Deconstructor" << std::endl;
}

AMateria& AMateria::operator=( const AMateria& other )
{
	std::cout << "AMateria Assignement Operator" << std::endl;
	this->type = other.getType(); // subject says "copying the type doesn’t make sense"
	return(*this);
}

std::string const & AMateria::getType( void ) const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	if (this->type == "ice")
		std::cout << "* shoots an ice bolt at ";
	else
		std::cout << "* heals ";
	std::cout << target.getName();
	if (this->type == "cure")
		std::cout << "'s wounds";
	std::cout << " *" << std::endl;
}