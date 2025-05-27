/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:21:45 by sikunne           #+#    #+#             */
/*   Updated: 2025/05/20 16:22:35 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		return((char)(c + ('A' - 'a')));
	else
		return (c);
}

void	ft_iterate(int argc, char **argv)
{
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
			std::cout << ft_toupper(argv[i][j]);
	}
}

int main(int argc, char **argv)
{
	if (argc > 1)
		ft_iterate(argc, argv);
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
