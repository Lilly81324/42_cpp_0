/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:35:01 by sikunne           #+#    #+#             */
/*   Updated: 2025/05/20 16:35:01 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "Contact.hpp"
# include "utility.hpp"

# define BOOKSIZE 8

class Phonebook
{
	private:
		Contact list[BOOKSIZE];
		int		last;
	public:
		Phonebook(void);
		~Phonebook(void);
		Contact	get_cont(int index);
		void add(void);
		void search(void);
};

#endif