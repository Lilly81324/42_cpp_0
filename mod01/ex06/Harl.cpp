/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:01:35 by sikunne           #+#    #+#             */
/*   Updated: 2025/05/26 17:53:56 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{}

Harl::~Harl( void )
{}

void Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "There is an error in line 25." << std::endl;
	std::cout << std::endl;
}

void Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "In line 25 you are dereferencing a potential null pointer." << std::endl;
	std::cout << std::endl;
}

void Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "Dereferencing a Null pointer will Segfault and Crash." << std::endl;
	std::cout << std::endl;
}

void Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "Your program wont work with that error." << std::endl;
	std::cout << std::endl;
}

int	input_to_level( std::string input )
{
	std::string wordUpp[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string wordLow[] = {"debug", "info", "warning", "error"};

	for (int i = 0; i < 4; i++)
	{
		if (wordUpp[i] == input || wordLow[i] == input)
		{
			return (i);
		}
	}
	return (4);
}

void Harl::complain( std::string level )
{
	int height;
	void	(Harl::*complainPtr[])( void ) = {\
		&Harl::debug, \
		&Harl::info, \
		&Harl::warning, \
		&Harl::error};

	height = input_to_level(level);
	while (height < 5)
	{
		switch (height)
		{
			case 0:
				(this->*complainPtr[height++])();
				break ;
			case 1:
				(this->*complainPtr[height++])();
				break ;
			case 2:
				(this->*complainPtr[height++])();
				break ;
			case 3:
				(this->*complainPtr[height])();
				height = 5;
				break ;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]";
				std::cout << std::endl;
				height = 5;
				break ;
		}
	}
	;
}