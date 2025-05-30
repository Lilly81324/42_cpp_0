/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:34:15 by sikunne           #+#    #+#             */
/*   Updated: 2025/05/30 17:43:05 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
		std::string name;
		int health;
		int energy;
		int dmg;
	public:
		ClapTrap( void );
		ClapTrap( const std::string& name );
		ClapTrap( const ClapTrap& other );
		~ClapTrap( void );
		ClapTrap& operator=( const ClapTrap& other );
		void attack( const std::string& target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );
};

#endif