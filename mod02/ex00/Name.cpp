/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Name.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 13:56:32 by sikunne           #+#    #+#             */
/*   Updated: 2025/05/27 17:46:35 by sikunne          ###   ########.fr       */
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

7
sing: 0
4+2+1
2^2 + 2^1 + 2^0
111.0
= 1.110 * 2^2

expo:
2+127
129
= 2^7 + 2^0
= 10000001

mantissa:
11100
1100

0 10000001 1100...0


00000000
0000000.1 = 0.5
0000001.1 = 1.5
000000.01 = 0.25
00000.011 = 0.375