/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:24:16 by sikunne           #+#    #+#             */
/*   Updated: 2025/05/20 16:24:16 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	this->fname = "";
	this->lname = "";	
	this->nname = "";
	this->number = "";
	this->secret = "";
}

Contact::~Contact(void)
{}

void	Contact::set_fname(std::string input)
{
	this->fname = input;
}

void	Contact::set_lname(std::string input)
{
	this->lname = input;
}

void	Contact::set_nname(std::string input)
{
	this->nname = input;
}

void	Contact::set_number(std::string input)
{
	this->number = input;
}

void	Contact::set_secret(std::string input)
{
	this->secret = input;
}

std::string	Contact::get_fname(void)
{
	return (this->fname);
}

std::string	Contact::get_lname(void)
{
	return (this->lname);
}

std::string	Contact::get_nname(void)
{
	return (this->nname);
}

std::string	Contact::get_number(void)
{
	return (this->number);
}

std::string	Contact::get_secret(void)
{
	return (this->secret);
}
