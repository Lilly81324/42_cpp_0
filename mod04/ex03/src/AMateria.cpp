#include "../inc/AMateria.hpp"
// #include "../inc/ICharacter.hpp"

//If no Default, can we call "Materia mat()" ?

// AMateria::AMateria( void )
// {
// 	std::cout << "Default AMateria Constructor" << std::endl;
// }

AMateria::AMateria( std::string const & type )
{
	std::cout << "Parameterized AMateria Constructor" << std::endl;
	if (type == "ice")
		this->type = "ice";
	else if (type == "cure")
		this->type = "cure";
	else
		this->type = "invalid";
}

AMateria::AMateria( const AMateria& other )
{
	std::cout << "Copy AMateria Constructor" << std::endl;
	this->type = other.getType();
}

AMateria::~AMateria( void )
{
	std::cout << "AMateria Deconstructor" << std::endl;
}

AMateria& AMateria::operator=( const AMateria& other )
{
	std::cout << "AMateria Assignement Operator" << std::endl;
	this->type = other.getType();
	return(*this);
}

std::string const & AMateria::getType( void ) const
{
	return (this->type);
}

// AMateria* AMateria::clone() const
// {};

// void AMateria::use(ICharacter& target)
// {
// 	//TODO
// 	// Use the Materia of this type
// }