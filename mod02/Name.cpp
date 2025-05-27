/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Name.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 13:56:32 by sikunne           #+#    #+#             */
/*   Updated: 2025/05/27 14:04:04 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Name.hpp"

Name::Name( void ) : _name(DEFAULTNAME)
{
	std::cout << "Default Constructor called on " << this->_name << std::endl;
}

Name::Name( std::string name ) : _name(name)
{
	std::cout << "Parameterized Constructor called on " << this->_name << std::endl;
}

Name::Name( const Name& other ) : _name(other._name)
{
	std::cout << "Copy constructor called on " << this->_name << std::endl;
}

Name::~Name( void )
{
	std::cout << "Deconstructor called on " << this->_name << std::endl;
}
