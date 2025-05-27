/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 17:46:29 by sikunne           #+#    #+#             */
/*   Updated: 2025/05/21 18:37:22 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string strng = "HI THIS IS BRAIN";;
	std::string *stringPTR = &strng;
	std::string &stringREF = strng;

	std::cout << &strng << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << strng << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}