/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:38:17 by sikunne           #+#    #+#             */
/*   Updated: 2025/06/04 13:38:17 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal( void );
		Animal( const std::string& );
		Animal( const Animal& );
		virtual ~Animal( void );
		const Animal& operator=( const Animal& );
		virtual void makeSound( void ) const;
		virtual const std::string& getType( void ) const;
};

#endif