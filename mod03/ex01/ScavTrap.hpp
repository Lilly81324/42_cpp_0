/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 16:52:31 by sikunne           #+#    #+#             */
/*   Updated: 2025/06/02 17:21:48 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap( void );
		ScavTrap( std::string );
		ScavTrap( const ScavTrap& );
		~ScavTrap( void );
		ScavTrap& operator=( const ScavTrap& );
		void guardGate( void );
		void attack( std::string );
};

#endif