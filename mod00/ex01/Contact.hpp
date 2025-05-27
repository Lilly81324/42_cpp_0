/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:25:07 by sikunne           #+#    #+#             */
/*   Updated: 2025/05/20 16:25:07 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
	private:
		std::string	fname;
		std::string	lname;
		std::string	nname;
		std::string	number;
		std::string	secret;
	public:
		Contact(void);
		~Contact(void);
		void		set_fname(std::string);
		void		set_lname(std::string);
		void		set_nname(std::string);
		void		set_number(std::string);
		void		set_secret(std::string);
		std::string	get_lname(void);
		std::string	get_fname(void);
		std::string	get_nname(void);
		std::string	get_number(void);
		std::string	get_secret(void);
};

#endif