/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:56:50 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/28 01:56:57 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
    Point P[4];
    for (int i = 0; i < 4; i++)
    {
        float x,y;
        std::cin >> x >> y;
        P[i] = Point(x, y);
        std::cout <<  P[i].get_X() << " "<< P[i].get_Y()  << std::endl;
    }
    std::cout << (bsp(P[0],P[1],P[2],P[3]) ? "yes" : "no") << std::endl;
}
