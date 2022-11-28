/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 01:29:40 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/28 01:53:23 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    int line;

    line = Point::line_equa_sig(a,b,point);
    if (Point::line_equa_sig(a,b,c) != line && line)
        return (0);
    line = Point::line_equa_sig(a,c,point);
    if (Point::line_equa_sig(a,c,b) != line && line)
        return (0);
    line = Point::line_equa_sig(c,b,point);
    if (Point::line_equa_sig(c,b,a) != line && line )
        return (0);
    return (1);
}