/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Name.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 13:52:25 by sikunne           #+#    #+#             */
/*   Updated: 2025/05/27 13:59:40 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NAME_HPP
# define NAME_HPP

# include <iostream>

# define DEFAULTNAME ""

class Name
{
	private:
		std::string _name;
	public:
		Name( void );
		Name( std::string name );
		Name( const Name& );
		~Name( void );
}

#endif