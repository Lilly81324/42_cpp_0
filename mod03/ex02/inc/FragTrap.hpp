/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:35:33 by sikunne           #+#    #+#             */
/*   Updated: 2025/06/02 17:45:32 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "../inc/ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap( void );
		FragTrap( std::string );
		FragTrap( const FragTrap& );
		~FragTrap( void );
		FragTrap& operator=( const FragTrap& );
		void highFivesGuys( void );
		void attack( std::string );
};

#endif