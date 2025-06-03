/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:50:21 by sikunne           #+#    #+#             */
/*   Updated: 2025/06/03 15:47:29 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	private:
		std::string name;
	public:
		DiamondTrap( void );
		DiamondTrap( std::string );
		DiamondTrap( const DiamondTrap& );
		~DiamondTrap( void );
		DiamondTrap& operator=( const DiamondTrap& );
		void whoAmI( void );
		void attack( const std::string& );
};

#endif