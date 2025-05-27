/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:01:35 by sikunne           #+#    #+#             */
/*   Updated: 2025/05/26 15:49:17 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{}

Harl::~Harl( void )
{}

void Harl::debug( void )
{
	std::cout << "There is an error in line 25." << std::endl;
}

void Harl::info( void )
{
	std::cout << "In line 25 you are dereferencing a potential null pointer." << std::endl;
}

void Harl::warning( void )
{
	std::cout << "Dereferencing a Null pointer will Segfault and Crash." << std::endl;
}

void Harl::error( void )
{
	std::cout << "Your program wont work with that error." << std::endl;
}
void Harl::complain( std::string level )
{
	void	(Harl::*complainPtr[])( void ) = {\
		&Harl::debug, \
		&Harl::info, \
		&Harl::warning, \
		&Harl::error};
	std::string word[] = {"debug", "info", "warning", "error"};

	for (int i = 0; i < 4; i++)
	{
		if (level == word[i])
			(this->*complainPtr[i])();
	}
}