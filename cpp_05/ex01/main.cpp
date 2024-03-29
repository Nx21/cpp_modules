/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:56:50 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/03 23:10:53 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
int main( void ) 
{
    Form    form("1337form", 10, 20);
    Bureaucrat a("nasr");
    std::cout << form;
    a.setGrade(11);
    a.signForm(form);
    try
    {
        a.increment();
        std::cout << a;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    a.signForm(form); 
    return 0;
}
