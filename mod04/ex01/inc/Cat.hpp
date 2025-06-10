/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 14:06:38 by sikunne           #+#    #+#             */
/*   Updated: 2025/06/10 14:06:38 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "../inc/Brain.hpp"
# include "../inc/Animal.hpp"

class Cat: public Animal
{
	private:
		Brain *brain;
	public:
		Cat( void );
		Cat( const std::string& );
		Cat( const Cat& other );
		Cat&	operator=( const Cat& other );
		~Cat( void );
		void makeSound( void ) const;
};

#endif
