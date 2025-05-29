/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 14:30:29 by sikunne           #+#    #+#             */
/*   Updated: 2025/05/29 16:07:04 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed cross(Point p1, Point p2, Point p3)
{
	Fixed pointcross;
	Fixed cornercross;

	pointcross = (p1.getX() - p3.getX()) * (p2.getY() - p3.getY());
	cornercross = (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
    return pointcross - cornercross;
}

bool bsp ( Point const pa, Point const pb, Point const pc, Point const point)
{
	Fixed fa(cross(point, pa, pb));
	Fixed fb(cross(point, pb, pc));
	Fixed fc(cross(point, pc, pa));

	if (fa < 0 && fb < 0 && fc < 0)
		return (true);
	else if (fa > 0 && fb > 0 && fc > 0)
		return (true);
	return (false);
}