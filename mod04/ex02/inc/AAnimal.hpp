/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:38:17 by sikunne           #+#    #+#             */
/*   Updated: 2025/06/04 13:38:17 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal
{
	protected:
		std::string type;
	public:
		AAnimal( void );
		AAnimal( const std::string& );
		AAnimal( const AAnimal& );
		virtual ~AAnimal( void );
		const AAnimal& operator=( const AAnimal& );
		virtual void makeSound( void ) const = 0;
		virtual const std::string& getType( void ) const = 0;
};

#endif