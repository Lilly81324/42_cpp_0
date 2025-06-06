#include "../inc/Cat.hpp"
#include "../inc/Brain.hpp"

Cat::Cat( void ): AAnimal()
{
	std::cout << "Default Cat Constructor" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat( const std::string& type ): AAnimal()
{
	std::cout << "Parameterized Cat Constructor" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
	(void)type;
}

Cat::Cat( const Cat& other ): AAnimal()
{
	std::cout << "Copy Cat Constructor" << std::endl;
	this->type = other.type;
	this->brain = new Brain();
}

Cat::~Cat( void )
{
	delete this->brain;
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

const std::string& Cat::getType( void ) const
{
	return (this->type);
}