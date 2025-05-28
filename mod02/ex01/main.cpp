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
		Fixed b( a );
		Fixed c;
		c = b;
		std::cout << a.getRawBits() << std::endl;
		std::cout << b.getRawBits() << std::endl;
		std::cout << c.getRawBits() << std::endl;
	}
	{
		Fixed d;
		d.setRawBits(5);
		d.setRawBits(d.getRawBits() + 1);
		std::cout << d.getRawBits() << std::endl;
	}
	return 0;
}