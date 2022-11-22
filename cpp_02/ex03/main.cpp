/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:56:50 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/22 01:42:36 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

// int line_equation()


int main( void )
{
    Point P[4];
    for (int i = 0; i < 4; i++)
    {
        float x,y;
        std::cout <<  "point :" ;
        std::cin >> x >> y;
        P[i] = Point(x,y);
    }
    std::cout << (bsp(P[0],P[1],P[2],P[3]) ? "yes" : "no") << std::endl;
    
    
    // while (1);
    
}
