#include "../inc/AMateria.hpp"
// #include "../inc/ICharacter.hpp"

//If no Default, can we call "Materia mat()" ?

AMateria::AMateria( void )
{
	if (DEBUG) std::cout << "Default AMateria Constructor" << std::endl;
}

AMateria::AMateria( std::string const & type )
{
	if (DEBUG) std::cout << "Parameterized AMateria Constructor" << std::endl;
	if (type == "ice")
		this->type = "ice";
	else if (type == "cure")
		this->type = "cure";
	else
		this->type = "invalid";
}

AMateria::AMateria( const AMateria& other )
{
	if (DEBUG) std::cout << "Copy AMateria Constructor" << std::endl;
	this->type = other.getType();
}

AMateria::~AMateria( void )
{
	if (DEBUG) std::cout << "AMateria Deconstructor" << std::endl;
}

AMateria& AMateria::operator=( const AMateria& other )
{
	if (DEBUG) std::cout << "AMateria Assignement Operator" << std::endl;
	this->type = other.getType(); // subject says "copying the type doesn’t make sense"
	return(*this);
}

std::string const & AMateria::getType( void ) const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	if (this->type == "ice")
		std::cout << "* shoots an ice bolt at ";
	else
		std::cout << "* heals ";
	std::cout << target.getName();
	if (this->type == "cure")
		std::cout << "'s wounds";
	std::cout << " *" << std::endl;
}