#include "../inc/Dog.hpp"

Dog::Dog( void ): Animal( )
{
	std::cout << "Default Dog Constructor" << std::endl;
	this->type = "Dog";
}

Dog::Dog( const std::string& type ): Animal( )
{
	std::cout << "Parameterized Dog Constructor" << std::endl;
	this->type = "Dog";
	(void)type;
}

Dog::Dog( const Dog& other ): Animal( )
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
	return (*this);
}

void Dog::makeSound( void ) const
{
	std::cout << "*woof* *bark*" << std::endl;
}