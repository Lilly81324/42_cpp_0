#include "../inc/Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Default Brain Constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Thought";
}

Brain::Brain( const Brain& other )
{
	std::cout << "Copy Brain Constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
}

Brain::~Brain( void )
{
	std::cout << "Brain Deconstructor" << std::endl;
}

Brain& Brain::operator=( const Brain& other )
{
	std::cout << "Brain Assignement Operator" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return(*this);
}
