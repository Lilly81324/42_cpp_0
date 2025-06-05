/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:38:17 by sikunne           #+#    #+#             */
/*   Updated: 2025/06/04 13:38:17 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal( void );
		WrongAnimal( const std::string& );
		WrongAnimal( const WrongAnimal& );
		virtual ~WrongAnimal( void );
		const WrongAnimal& operator=( const WrongAnimal& );
		void makeSound( void ) const;
		virtual const std::string& getType( void ) const;
};

#endif