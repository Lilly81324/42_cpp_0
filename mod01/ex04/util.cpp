/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 17:05:58 by sikunne           #+#    #+#             */
/*   Updated: 2025/05/23 18:22:06 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

// Create the input file to get the input from
void ft_inputfile(std::ifstream &file, char *name)
{
	file.open(name, std::ios::in);
	if (!file.is_open())
	{
		std::cout << "Error: Could not open " << name << std::endl;
	}
}

// Create the file to put the output in
void ft_outputfile(std::ofstream &file, char *oldname)
{
	std::string name;

	name = oldname;
	name += ".replace";
	file.open(name.c_str(), std::ios::out | std::ios::trunc);
	if (!file.is_open())
	{
		std::cout << "Error: Could not create " << name << std::endl;
	}
}

// Loads more content into <buffer> from from <in>
int	ft_getinput(std::ifstream &in, std::string& buffer)
{
	char	c_temp[BUFFER_SIZE];
	std::streamsize readd;
	std::string s_temp;

	in.read(c_temp, BUFFER_SIZE);
	readd = in.gcount();
	if (readd <= 0)
	{
		return (0);
	}
	s_temp.assign(c_temp, readd);
	buffer += s_temp;
	return (1);
}

