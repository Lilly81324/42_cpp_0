/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:36:29 by sikunne           #+#    #+#             */
/*   Updated: 2025/05/20 16:36:29 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
	last = BOOKSIZE - 1;
};

Phonebook::~Phonebook(void)
{}

Contact	Phonebook::get_cont(int index)
{
	return(this->list[index]);
}

void	Phonebook::add(void)
{
	last++;
	if (last >= BOOKSIZE)
		last = 0;
	std::cout << "Setting position " << last << std::endl;
	(this->list[last]).set_fname(ft_get_input("First Name:     "));
	(this->list[last]).set_lname(ft_get_input("Last Name:      "));
	(this->list[last]).set_nname(ft_get_input("Nickname:       "));
	(this->list[last]).set_number(ft_get_input("Number:         "));
	(this->list[last]).set_secret(ft_get_input("Darkest Secret: "));
}

void	Phonebook::search(void)
{
	int	index;

	std::cout << "|     Index|First Name|Last Name |  Nickname|" << std::endl;
	for (int i = 0; i < 4; i++)
		std::cout << "|----------";
	std::cout << "|" << std::endl;
	for (int i = 0; i < BOOKSIZE; i++)
	{
		std::cout << "|" << std::setw(10) << i;
		std::cout << "|" << std::setw(10) << ft_shorten((this->get_cont(i)).get_fname());
		std::cout << "|" << std::setw(10) << ft_shorten((this->get_cont(i)).get_lname());
		std::cout << "|" << std::setw(10) << ft_shorten((this->get_cont(i)).get_nname());
		std::cout << "|" << std::endl;
	}
	index = ft_get_intput("Index of the contact: ");
	std::cout << "First Name:|" << (this->get_cont(index)).get_fname() << std::endl;
	std::cout << "Last Name: |" << (this->get_cont(index)).get_lname() << std::endl;
	std::cout << "Nickname:  |" << (this->get_cont(index)).get_nname() << std::endl;
	std::cout << "Number:    |" << (this->get_cont(index)).get_number() << std::endl;
	std::cout << "Secret:    |" << (this->get_cont(index)).get_secret() << std::endl;
}
