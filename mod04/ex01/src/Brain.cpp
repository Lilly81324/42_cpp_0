#include "../inc/Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Default Brain Constructor" << std::endl;
}

Brain::Brain( const Brain& other )
{
	std::cout << "Copy Brain Constructor" << std::endl;
}

Brain::~Brain( void )
{
	std::cout << "Brain Deconstructor" << std::endl;
}

Brain& Brain::operator=( const Brain& other )
{
	std::cout << "Brain Assignement Operator" << std::endl;
	return(*this);
}
