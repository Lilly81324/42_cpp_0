/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 14:19:06 by sikunne           #+#    #+#             */
/*   Updated: 2025/05/23 18:25:02 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void ft_replace( std::string& buffer, const std::string& read, const std::string& write, int &count)
{
	int index;

	if (read.size() <= 0)
	 	return ;
	while (buffer.find(read, 0) != std::string::npos)
	{
		index = buffer.find(read, 0);
		buffer.erase(index, read.size());
		buffer.insert(index, write);
		count++;
	}
}

void ft_start( std::ifstream &in, std::ofstream &out,\
			const std::string& read, const std::string& write )
{
	unsigned int	size = 0;
	std::string buffer = "";
	int	count = 0;

	size = read.size();
	while (ft_getinput(in, buffer))
	{
		ft_replace(buffer, read, write, count);
		while (buffer.size() >= size * 2)
		{
			out << buffer.substr(0, size);
			buffer.erase(0, size);
		}
	}
	if (buffer.size() > 0)
	{
		out << buffer;
	}
	std::cout << count << " instances of \"" << read;
	std::cout << "\" replaced with \"" << write << "\"" << std::endl;
	in.close();
	out.close();
}

int main(int argc, char **argv)
{
	std::ifstream in;
	std::ofstream out;
	std::string to_read;
	std::string to_write;

	if (argc != 4)
	{
		std::cout << "Error: Invalid input, please provide three arguments.\n";
		std::cout << "filename, string_to_replace, replacement_string" << std::endl;
		return (1);
	}
	to_read = argv[2];
	to_write = argv[3];
	if (to_read.size() <= 0)
	{
		std::cout << "Error: Cannot replace nothing with something" << std::endl;
		return (0);
	}
	ft_inputfile(in, argv[1]);
	if (!in.is_open())
		return (1);
	ft_outputfile(out, argv[1]);
	if (!out.is_open())
		return (1);
	ft_start(in, out, to_read, to_write);
	return (0);
}
