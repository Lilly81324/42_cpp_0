/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 12:31:37 by sikunne           #+#    #+#             */
/*   Updated: 2025/05/30 15:37:41 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ): x(0), y(0)
{}

Point::Point( const float& setX, const float& setY): x(setX), y(setY)
{}

Point::Point( const Point& other): x(other.getX()), y(other.getY())
{}

Point::~Point( void )
{}

Point& Point::operator=( const Point& other )
{
	(void)other;
	std::cout << "Warning, cannot set one point to another by '=', due to const keyword\n";
	std::cout << "Please initialise the point based on the target instead" << std::endl;
	return (*this);
}

const Fixed& Point::getX( void )const
{
	return (this->x);
}

const Fixed& Point::getY( void )const
{
	return (this->y);
}

std::ostream &operator<<( std::ostream& out, const Point& point )
{
	out << point.getX() << "|" << point.getY();
	return (out);
}