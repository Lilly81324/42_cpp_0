/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 13:56:32 by sikunne           #+#    #+#             */
/*   Updated: 2025/05/27 17:46:35 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors: 
Fixed::Fixed( void ) : _value(0)
{
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& other )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

// Destructors:
Fixed::~Fixed( void )
{
	std::cout << "Deconstructor called" << std::endl;
}

// Operators:
Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl; // never happens
	if (this != &other)
	{
		this->_value = other.getRawBits();
	}
	return (*this);
}

// Functions:
int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}



