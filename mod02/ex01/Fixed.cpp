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

Fixed::Fixed( const int& value )
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = value << this->_bitsize;
}

Fixed::Fixed( const float& value )
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(value * (1 << this->_bitsize));
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
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_value = other.getRawBits();
	}
	return (*this);
}

// Functions:
int Fixed::getRawBits( void ) const
{
	return (this->_value);
}

void Fixed::setRawBits( int const raw )
{
	this->_value = raw;
}

float Fixed::toFloat( void ) const
{
	return ((float)this->_value / (float)(1 << this->_bitsize));
}

int Fixed::toInt( void ) const
{
	return (this->_value >> this->_bitsize);
}

std::ostream &operator<<( std::ostream &out, const Fixed& target )
{
	out << target.toFloat();
	return (out);
}