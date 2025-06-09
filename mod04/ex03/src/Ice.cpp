#include "../inc/Ice.hpp"

Ice::Ice( void ): AMateria( "ice" )
{
	if (DEBUG) std::cout << "Default Ice Constructor" << std::endl;
}

Ice::Ice( const std::string& name ): AMateria( "ice" )
{
	if (DEBUG) std::cout << "Default Ice Constructor" << std::endl;
	(void)name;
}

Ice::Ice( const Ice& other ): AMateria( "ice" )
{
	if (DEBUG) std::cout << "Copy Ice Constructor" << std::endl;
	(void)other;
}

Ice::~Ice( void )
{
	if (DEBUG) std::cout << "Ice Deconstructor" << std::endl;
}

Ice& Ice::operator=( const Ice& other )
{
	if (DEBUG) std::cout << "Ice Assignement Operator" << std::endl;
	this->type = other.type;
	return (*this);
}

AMateria* Ice::clone() const
{
	AMateria *cloned = new Ice;
	if (DEBUG) std::cout << "Ice Clone created" << std::endl;
	return(cloned);
}