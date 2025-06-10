/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 14:22:49 by sikunne           #+#    #+#             */
/*   Updated: 2025/06/10 14:22:50 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cure.hpp"

Cure::Cure( void ): AMateria( "cure" )
{
	if (DEBUG) std::cout << "Default Cure Constructor" << std::endl;
}

Cure::Cure( const std::string& name ): AMateria( "ice" )
{
	if (DEBUG) std::cout << "Default Cure Constructor" << std::endl;
	(void)name;
}

Cure::Cure( const Cure& other ): AMateria( "cure" )
{
	if (DEBUG) std::cout << "Copy Cure Constructor" << std::endl;
	(void)other;
}

Cure::~Cure( void )
{
	if (DEBUG) std::cout << "Cure Deconstructor" << std::endl;
}

Cure& Cure::operator=( const Cure& other )
{
	if (DEBUG) std::cout << "Cure Assignement Operator" << std::endl;
	this->type = other.type;
	return (*this);
}

AMateria* Cure::clone() const
{
	AMateria *cloned = new Cure;
	if (DEBUG) std::cout << "Cure Clone created" << std::endl;
	return(cloned);
}