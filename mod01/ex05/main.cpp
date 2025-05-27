/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:27:07 by sikunne           #+#    #+#             */
/*   Updated: 2025/05/26 15:45:25 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void let_harl_complain(std::string *critics, int amount)
{
	Harl harl;

	std::cout << "--New Tests--" << std::endl;
	for (int i = 0; i < amount; i++)
	{
		harl.complain(critics[i]);
	}
	std::cout << std::endl;
}

int	main(void)
{
	Harl harl;
	std::string types1[] = {"debug", "info", "warning", "error"};
	std::string types2[] = {"error", "warning", "info", "debug"};
	std::string	types3[] = {"nothing", "blablabla", "actualError"};

	let_harl_complain(types1, 4);
	let_harl_complain(types2, 4);
	let_harl_complain(types3, 3);
	return (0);
}
