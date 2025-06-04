#include "Dog.hpp"

Dog::Dog( void )
{
	std::cout << "Default Dog Constructor" << std::endl;
	this->type = "Dog";
}

Dog::Dog( const std::string& type )
{
	std::cout << "Parameterized Dog Constructor" << std::endl;
	this->type = "Dog";
	(void)type;
}

Dog::Dog( const Dog& other )
{
	std::cout << "Copy Dog Constructor" << std::endl;
	this->type = other.type;
}

Dog::~Dog( void )
{
	std::cout << "Dog Deconstructor" << std::endl;
}

Dog& Dog::operator=( const Dog& other )
{
	std::cout << "Dog Assignement Operator" << std::endl;
	this->type = other.type;
}

void Dog::makeSound( void ) const
{
	std::cout << "*woof* *bark*" << std::endl;
}