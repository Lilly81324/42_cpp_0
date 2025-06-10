/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 14:16:40 by sikunne           #+#    #+#             */
/*   Updated: 2025/06/10 14:16:41 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "../inc/Brain.hpp"
# include "../inc/AAnimal.hpp"

class Dog: public AAnimal
{
	private:
		Brain *brain;
	public:
		Dog( void );
		Dog( const std::string& );
		Dog( const Dog& other );
		Dog&	operator=( const Dog& other );
		~Dog( void );
		void makeSound( void ) const;
		const std::string& getType( void ) const;
};

#endif
