/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 17:00:35 by sikunne           #+#    #+#             */
/*   Updated: 2025/05/20 17:00:35 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utility.hpp"

std::string	ft_get_input(std::string msg)
{
	std::string	input;

	std::cout << msg;
	std::getline(std::cin, input);
	while (input.length() <= 0)
		std::getline(std::cin, input);
	return (input);
}

std::string	ft_shorten(std::string content)
{
	if (content.length() > COLUMNWIDTH)
		return (content.substr(0, 9) + ".");
	return (content);
}

int	ft_atoi(char c)
{
	if (c >= '0' && c <= '9')
		return ((int)c - '0');
	else
		return (0);
}

int	ft_get_intput(std::string msg)
{
	std::string	input;
	int index;

	std::cout << msg;
	while (1)
	{
		std::getline(std::cin, input);
		while (input.length() <= 0)
			std::getline(std::cin, input);
		if (input.length() != 1)
			std::cout << "Input invalid!" << std::endl << msg;
		else if (std::isdigit(input[0]) == 0)
			std::cout << "Input invalid!" << std::endl << msg;
		else
		{
			index = ft_atoi(input[0]);
			if (index > BOOKSIZE - 1 || index < 0)
				std::cout << "Index out of range" << std::endl << msg;
			else
				break;
		}
	}
	return (index);
}
