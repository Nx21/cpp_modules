/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 04:18:37 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/22 02:11:44 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(0), y(0)
{
}

Point::Point(const Point &src): x(src.get_X()), y(src.get_Y())
{
	
}

Point::Point(float ax, float ay) :x(ax), y(ay)
{
	
}


Point::~Point()
{
}

Fixed				Point::get_X() const
{
	return	x;
}

Fixed				Point::get_Y() const
{
	return	y;
}

Point &				Point::operator=(Point const &rhs)
{
	Point *p = new Point(rhs);
	return *p ;
}

int					Point::line_equa_sig(Point const a, Point const b, Point const x)
{
	Fixed res;
	res = (a.get_Y() - x.get_Y()) * (a.get_X() - b.get_X()) - (a.get_Y() - b.get_Y()) * (a.get_X() - x.get_X());
	if (res != 0)
		return res > 0 ? 1 : -1;
	return 0;
}

// std::ostream &			operator<<( std::ostream & o, Point const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }
