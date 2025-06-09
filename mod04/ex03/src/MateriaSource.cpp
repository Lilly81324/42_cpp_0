/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 14:45:05 by sikunne           #+#    #+#             */
/*   Updated: 2025/06/09 17:42:08 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/MateriaSource.hpp"
# include "../inc/Ice.hpp"
# include "../inc/Cure.hpp"

MateriaSource::MateriaSource( void )
{
	if (DEBUG) std::cout << "Default MateriaSource Constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		this->templates[i] = NULL;
}

MateriaSource::MateriaSource( const std::string& name )
{
	if (DEBUG) std::cout << "Parameterized MateriaSource Constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		this->templates[i] = NULL;
	if (name == "ice")
		this->templates[0] = new Ice();
	else if (name == "cure")
		this->templates[0] = new Cure();
}

MateriaSource::MateriaSource( const MateriaSource& other )
{
	if (DEBUG) std::cout << "Copy MateriaSource Constructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (other.templates[i] == NULL)
			this->templates[i] = NULL;
		else if (other.templates[i]->getType() == "ice")
			this->templates[i] = new Ice();
		else if (other.templates[i]->getType() == "cure")
			this->templates[i] = new Cure();
		else
			this->templates[i] = NULL;
	}
}

MateriaSource&	MateriaSource::operator=( const MateriaSource& other )
{
	if (DEBUG) std::cout << "MateriaSource Assignement Operator" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (other.templates[i] == NULL)
			this->templates[i] = NULL;
		else if (other.templates[i]->getType() == "ice")
			this->templates[i] = new Ice();
		else if (other.templates[i]->getType() == "cure")
			this->templates[i] = new Cure();
		else
			this->templates[i] = NULL;
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	if (DEBUG) std::cout << "MateriaSource Deconstructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->templates[i] != NULL)
		{
			delete this->templates[i];
		}
	}
}

void MateriaSource::learnMateria(AMateria* type)
{
	int pos = 0;

	while (pos < 4 && this->templates[pos] != NULL)
		pos++;
	if (pos >= 4)
	{
		if (DEBUG) std::cout << "Couldn't learn this Materia, the Source is full" << std::endl;
	}
	else
		this->templates[pos] = type;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int	i = 0;
	AMateria* target = NULL;
	while (i < 4)
	{
		if (this->templates[i]->getType() == type)
		{
			target = this->templates[i]->clone();
			break;
		}
		i++;
	}
	if (i == 4 && target == NULL)
		if (DEBUG) std::cout << "No such Materia " << type << " template exists";
	return (target);
}
