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
}

Fixed::Fixed( const int& value )
{
	this->_value = value << this->_bitsize;
}

Fixed::Fixed( const float& value )
{
	this->_value = roundf(value * (1 << this->_bitsize));
}

Fixed::Fixed( const Fixed& other )
{
	*this = other;
}

// Destructors:
Fixed::~Fixed( void )
{}

// Copy Operator:
Fixed& Fixed::operator=(const Fixed& other)
{
	if (this != &other)
	{
		this->_value = other.getRawBits();
	}
	return (*this);
}

// Truth Operators:
bool Fixed::operator>( const Fixed& target) const
{	return (this->_value > target._value);	}

bool Fixed::operator<( const Fixed& target) const
{	return (this->_value < target._value);	}

bool Fixed::operator==( const Fixed& target) const
{	return (this->_value == target._value);	}

bool Fixed::operator!=( const Fixed& target) const
{	return (this->_value != target._value);	}

bool Fixed::operator>=( const Fixed& target) const
{	return (this->_value >= target._value);	}

bool Fixed::operator<=( const Fixed& target) const
{	return (this->_value <= target._value);	}

// Increment Operators:
Fixed& Fixed::operator++(void)
{
	this->setRawBits(this->_value + 1);
	return (*this);
}

Fixed& Fixed::operator--(void)
{
	this->setRawBits(this->_value - 1);
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed copy(*this);
	this->setRawBits(this->_value + 1);
	return (copy);
}

Fixed Fixed::operator--(int)
{
	Fixed copy(*this);
	this->setRawBits(this->_value - 1);
	return (copy);
}

// Arithmetic Operators:
Fixed Fixed::operator+( const Fixed& target ) const
{
	Fixed result;
	result.setRawBits(this->_value + target._value);
	return (result);
}

Fixed Fixed::operator-( const Fixed& target ) const
{
	Fixed result;
	result.setRawBits(this->_value - target._value);
	return (result);
}

Fixed Fixed::operator*( const Fixed& target ) const
{
	Fixed result;
	result.setRawBits((this->_value * target._value) >> this->_bitsize);
	return (result);
}

Fixed Fixed::operator/( const Fixed& target ) const
{
	Fixed result;
	if (target.getRawBits() == 0)
		result.setRawBits(0);
	else
		result.setRawBits((this->_value << this->_bitsize) / target._value);
	return (result);
}

// Output Operators:
std::ostream &operator<<( std::ostream &out, const Fixed& target )
{
	out << target.toFloat();
	return (out);
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

Fixed& Fixed::min( Fixed& one, Fixed &two )
{
	if (one > two)
		return (two);
	return (one);
}

Fixed& Fixed::max( Fixed& one, Fixed &two )
{
	if (one < two)
		return (two);
	return (one);
}

const Fixed& Fixed::min( const Fixed& one, const Fixed &two )
{
	if (one > two)
		return (two);
	return (one);
}

const Fixed& Fixed::max( const Fixed& one, const Fixed &two )
{
	if (one < two)
		return (two);
	return (one);
}