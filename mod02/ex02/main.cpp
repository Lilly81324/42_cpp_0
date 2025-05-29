/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:04:21 by sikunne           #+#    #+#             */
/*   Updated: 2025/05/28 14:04:21 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}
	{
		Fixed a(5);
		Fixed b(a);
		Fixed null;
		Fixed c(6.9696969f);
		Fixed exactA(0.00390625f);
		Fixed exactB(0.06640625f);
		
		b++;
		std::cout << a << " + " << b << " = " << a+b << std::endl;
		std::cout << a << " - " << b << " = " << a-b << std::endl;
		std::cout << a << " / " << b << " = " << a/b << std::endl;
		std::cout << a << " / " << null << " = " << a/null << std::endl;
		std::cout << a << " / " << c << " = " << a/c << std::endl;
		std::cout << a << " * " << c << " = " << a*c << std::endl;
		std::cout << exactA << " + " << exactB << " = " << exactA + exactB << std::endl;
		std::cout << "... should be " << 0.00390625f + 0.06640625f << std::endl;
	}
	return 0;
}
