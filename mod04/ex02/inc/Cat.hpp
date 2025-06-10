/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 14:16:43 by sikunne           #+#    #+#             */
/*   Updated: 2025/06/10 14:16:43 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "../inc/Brain.hpp"
# include "../inc/AAnimal.hpp"

class Cat: public AAnimal
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
		const std::string& getType( void ) const;
};

#endif
