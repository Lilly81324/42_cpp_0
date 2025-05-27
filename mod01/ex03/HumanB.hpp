/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 15:26:51 by sikunne           #+#    #+#             */
/*   Updated: 2025/05/22 15:26:51 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		Weapon*	weapon;
		std::string name;
	public:
		HumanB( const std::string& );
		~HumanB( void );
		void	attack( void );
		void	setWeapon( Weapon& );
};

#endif