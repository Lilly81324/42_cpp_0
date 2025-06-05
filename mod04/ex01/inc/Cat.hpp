#ifndef CAT_HPP
# define CAT_HPP

# include "../inc/Brain.hpp"
# include "../inc/Animal.hpp"

class Cat: public Animal
{
	public:
		Brain *brain;
		Cat( void );
		Cat( const std::string& );
		Cat( const Cat& other );
		Cat&	operator=( const Cat& other );
		~Cat( void );
		void makeSound( void ) const;
};

#endif
