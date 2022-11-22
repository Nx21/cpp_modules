/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 04:20:26 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/22 01:43:08 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{

	public:

		Point();
		Point(float ax, float ay);
		Point(Point const &src);
		~Point();
		Point 			&operator=( Point const & rhs );
		static int		line_equa_sig(Point const a, Point const b, Point const x);	
		Fixed			get_X() const;
		Fixed			get_Y() const;
	private:
		Fixed const	x;
		Fixed const	y;
};
bool bsp(Point const a, Point const b, Point const c, Point const point);
// std::ostream &			operator<<( std::ostream & o, Point const & i);

#endif /* *********************************************************** POINT_H */