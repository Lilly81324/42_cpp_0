/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 14:22:22 by sikunne           #+#    #+#             */
/*   Updated: 2025/06/10 14:22:31 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure( void );
		Cure( const std::string& name );
		Cure( const Cure& other );
		Cure&	operator=( const Cure& other );
		virtual ~Cure( void );
		AMateria* clone( void ) const;
};

#endif
