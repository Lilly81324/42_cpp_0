#include "../inc/Cure.hpp"

Cure::Cure( void ): AMateria( "cure" )
{
	std::cout << "Default Cure Constructor" << std::endl;

}

Cure::Cure( const Cure& other ): AMateria( "cure" )
{
	std::cout << "Copy Cure Constructor" << std::endl;
	(void)other;
}

Cure::~Cure( void )
{
	std::cout << "Cure Deconstructor" << std::endl;
}

Cure& Cure::operator=( const Cure& other )
{
	std::cout << "Cure Assignement Operator" << std::endl;
	this->type = other.type;
	return (*this);
}

AMateria* Cure::clone() const
{
	AMateria *cloned = new Cure;
	return(cloned);
}