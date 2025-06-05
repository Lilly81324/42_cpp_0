#include "Animal.hpp"

Animal::Animal( void )
{
	std::cout << "Default Animal Constructor" << std::endl;
}

Animal::Animal( Your_Parameters_here )
{
	std::cout << "Parameterized Animal Constructor" << std::endl;
}

Animal::Animal( const Animal& other )
{
	std::cout << "Copy Animal Constructor" << std::endl;
}

Animal::~Animal( void )
{
	std::cout << "Animal Deconstructor" << std::endl;
}

Animal& Animal::operator=( const Animal& other )
{
	std::cout << "Animal Assignement Operator" << std::endl;
return(*this);
}
