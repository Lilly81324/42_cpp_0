/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 15:18:08 by sikunne           #+#    #+#             */
/*   Updated: 2025/05/22 15:18:08 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( const std::string& type)
{
	this->type = type;
	std::cout << "A [" << type << "] appears" << std::endl;
}

Weapon::~Weapon( void )
{}

const std::string& Weapon::getType( void )
{
	return (type);
}

void Weapon::setType( std::string type)
{
	std::cout << "[" << this->type << "] transformed into [";
	std::cout << type << "]" << std::endl;
	this->type = type;
}
