/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:56:50 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/03 22:52:55 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <iostream>
int main( void ) 
{
    {
        Bureaucrat a("bedro");
        a.setGrade(1);
        std::cout << a;
        try
        {
            a.increment();
            std::cout << a;
        }
        catch(std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    {
        Bureaucrat a("bedro");
        a.setGrade(150);
        std::cout << a;
        try
        {
            a.decrement();
            std::cout << a;
        }
        catch(std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    {
        Bureaucrat a("bedro");
        a.setGrade(100);
        std::cout << a;
        try
        {
            a.decrement();
            std::cout << a;
        }
        catch(std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            a.increment();
            std::cout << a;
        }
        catch(std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    
    return 0;
}
