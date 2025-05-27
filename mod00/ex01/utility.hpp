/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 17:01:28 by sikunne           #+#    #+#             */
/*   Updated: 2025/05/20 17:01:28 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILITY_HPP
# define UTILITY_HPP

# include <iostream>

# define BOOKSIZE 8
# define COLUMNWIDTH 10

std::string	ft_get_input(std::string msg);
std::string	ft_shorten(std::string content);
int	ft_get_intput(std::string msg);

#endif