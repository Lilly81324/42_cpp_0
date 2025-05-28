/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 13:52:25 by sikunne           #+#    #+#             */
/*   Updated: 2025/05/28 16:32:21 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int _value;
		static const int _bitsize = 8;
	public:
		Fixed( void );
		Fixed( const int& );
		Fixed( const float& value );
		Fixed( const Fixed& );
		~Fixed( void );
		Fixed& operator=(const Fixed&);
		Fixed& operator<<( const Fixed& target );
		int getRawBits( void ) const;
		void setRawBits( int const );
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream &operator<<( std::ostream &out, const Fixed& target );

#endif