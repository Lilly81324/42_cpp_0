/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 14:22:20 by sikunne           #+#    #+#             */
/*   Updated: 2025/06/10 14:22:32 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class AMateria;

class Character: public ICharacter
{
	private:
		std::string name;
		AMateria* inventory[4];
	public:
		Character( void );
		Character( const std::string& );
		Character( const Character& other );
		Character&	operator=( const Character& other );
		~Character( void );
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
