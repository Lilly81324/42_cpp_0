#ifndef ICE_HPP
# define ICE_HPP

# include "../inc/AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice( void );
		// Ice( std::string name );
		Ice( const Ice& other );
		Ice&	operator=( const Ice& other );
		virtual ~Ice( void );
		AMateria* clone( void ) const;
};

#endif
