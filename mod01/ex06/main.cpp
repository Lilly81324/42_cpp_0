/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:27:07 by sikunne           #+#    #+#             */
/*   Updated: 2025/05/26 16:43:12 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl harl;
	std::string input;

	if (argc < 2)
	{
		std::cout << "Unusually, Harl is not complaining about things" << std::endl;
		return (0);
	}
	if (argc > 2)
	{
		std::cout << "Harl is complaining too much to list it all" << std::endl;
		return (0);
	}
	input.assign(argv[1]);
	harl.complain(input);
	return (0);
}
