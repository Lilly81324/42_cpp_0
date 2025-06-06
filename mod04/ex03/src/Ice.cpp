#include "../inc/Ice.hpp"

Ice::Ice( void ): AMateria( "ice" )
{
	std::cout << "Default Ice Constructor" << std::endl;

}

// Ice::Ice( Your_Parameters_here )
// {
// 	std::cout << "Parameterized Ice Constructor" << std::endl;
// }

Ice::Ice( const Ice& other ): AMateria( "ice" )
{
	std::cout << "Copy Ice Constructor" << std::endl;
	(void)other;
}

Ice::~Ice( void )
{
	std::cout << "Ice Deconstructor" << std::endl;
}

Ice& Ice::operator=( const Ice& other )
{
	std::cout << "Ice Assignement Operator" << std::endl;
	this->type = other.type;
	return (*this);
}

AMateria* Ice::clone() const
{
	AMateria *cloned = new Ice;
	return(cloned);
}