/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 13:52:25 by sikunne           #+#    #+#             */
/*   Updated: 2025/05/28 14:12:54 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int _value;
		static const int _bitsize = 8;
	public:
		Fixed( void );
		Fixed( int );
		Fixed( const Fixed& );
		~Fixed( void );
		Fixed& operator=(const Fixed&);
		int getRawBits( void ) const;
		void setRawBits( int const );
};

#endif