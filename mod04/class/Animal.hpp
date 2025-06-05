#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	public:
		int id;
		Animal( void );
		Animal( Your_Parameters_here );
		Animal( const Animal& other );
		Animal&	operator=( const Animal& other );
		~Animal( void );
};

#endif
