/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 14:34:37 by sikunne           #+#    #+#             */
/*   Updated: 2025/06/06 16:37:50 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "Character.hpp"

class Character;

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria(void);
		AMateria( std::string const & );
		AMateria( const AMateria& );
		virtual ~AMateria( void );
		AMateria&	operator=( const AMateria& other );
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(Character& target); // should be IChracter
};

#endif
