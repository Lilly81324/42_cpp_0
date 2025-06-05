#include "../inc/Cat.hpp"

Cat::Cat( void ): Animal()
{
	std::cout << "Default Cat Constructor" << std::endl;
	this->type = "Cat";
}

Cat::Cat( const std::string& type ): Animal()
{
	std::cout << "Parameterized Cat Constructor" << std::endl;
	this->type = "Cat";
	(void)type;
}

Cat::Cat( const Cat& other ): Animal()
{
	std::cout << "Copy Cat Constructor" << std::endl;
	this->type = other.type;
}

Cat::~Cat( void )
{
	std::cout << "Cat Deconstructor" << std::endl;
}

Cat& Cat::operator=( const Cat& other )
{
	std::cout << "Cat Assignement Operator" << std::endl;
	this->type = other.type;
	return (*this);
}

void Cat::makeSound( void ) const
{
	std::cout << "*meeooow*" << std::endl;
}