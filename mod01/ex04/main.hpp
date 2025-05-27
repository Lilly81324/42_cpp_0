/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 14:19:17 by sikunne           #+#    #+#             */
/*   Updated: 2025/05/23 18:11:56 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

# include <iostream>
# include <fstream>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

void ft_inputfile(std::ifstream &file, char *name);
void ft_outputfile(std::ofstream &file, char *oldname);
int	ft_getinput(std::ifstream &in, std::string& buffer);

#endif