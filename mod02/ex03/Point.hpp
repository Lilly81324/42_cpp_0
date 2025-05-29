/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 12:18:32 by sikunne           #+#    #+#             */
/*   Updated: 2025/05/29 16:08:12 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point( void );
		Point( const float&, const float& );
		Point( const Point& );
		Point& operator=( const Point& );
		~Point( void );
		const Fixed& getX( void )const;
		const Fixed& getY( void )const;
};

std::ostream &operator<<( std::ostream& out, const Point& point );
bool bsp ( Point const pa, Point const pb, Point const pc, Point const point);

#endif