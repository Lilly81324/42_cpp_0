#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat( void );
		Cat( const std::string& );
		Cat( const Cat& other );
		Cat&	operator=( const Cat& other );
		~Cat( void );
		void makeSound( void ) const override;
};

#endif
