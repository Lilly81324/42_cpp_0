/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phobo.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 17:57:03 by sikunne           #+#    #+#             */
/*   Updated: 2025/05/20 17:57:04 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

int main(void)
{
	Phonebook phobo;
	std::string	input;

	while(1)
	{
		input = ft_get_input("Please give a command: ");
		if (input == "EXIT")
			break ;
		else if (input == "ADD")
			phobo.add();
		else if (input == "SEARCH")
			phobo.search();
		else
			std::cout << std::endl;
	}
	return (0);
}
