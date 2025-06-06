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
