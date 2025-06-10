/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 14:22:23 by sikunne           #+#    #+#             */
/*   Updated: 2025/06/10 14:22:30 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice( void );
		Ice( const std::string& name );
		Ice( const Ice& other );
		Ice&	operator=( const Ice& other );
		virtual ~Ice( void );
		AMateria* clone( void ) const;
};

#endif
