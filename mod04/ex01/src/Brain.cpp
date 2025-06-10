/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 14:04:46 by sikunne           #+#    #+#             */
/*   Updated: 2025/06/10 14:04:46 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Default Brain Constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Thought";
}

Brain::Brain( const std::string& idea )
{
	std::cout << "Default Brain Constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = idea;
}

Brain::Brain( const Brain& other )
{
	std::cout << "Copy Brain Constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
}

Brain::~Brain( void )
{
	std::cout << "Brain Deconstructor" << std::endl;
}

Brain& Brain::operator=( const Brain& other )
{
	std::cout << "Brain Assignement Operator" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return(*this);
}
