#ifndef CURE_HPP
# define CURE_HPP

# include "../inc/AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure( void );
		// Cure( std::string name );
		Cure( const Cure& other );
		Cure&	operator=( const Cure& other );
		virtual ~Cure( void );
		AMateria* clone( void ) const;
};

#endif
