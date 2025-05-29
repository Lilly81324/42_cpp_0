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

#include "Point.hpp"

void	printpoint(const Point& a, const Point& b, const Point& c, const Point& target)
{
	std::cout << "Point [" << target << "] is ";
	if (!bsp(a, b, c, target))
		std::cout << "NOT ";
	else
		std::cout << "    ";
	std::cout << "in the triangle" << std::endl;
}

int main( void )
{
	Point a;
	Point b(5, 0);
	Point c(0, 5);

	Point target0(a);
	Point target1(1, 1);
	Point target2(2, 2);
	Point target3(3, 3);
	Point target4(6, 6);
	Point target5(0, 2);

	printpoint(a, b, c, target0);
	printpoint(a, b, c, target1);
	printpoint(a, b, c, target2);
	printpoint(a, b, c, target3);
	printpoint(a, b, c, target4);
	printpoint(a, b, c, target5);
	return(0);
}
