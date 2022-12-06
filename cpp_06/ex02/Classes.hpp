/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 22:50:02 by nhanafi           #+#    #+#             */
/*   Updated: 2022/12/06 00:09:34 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLASSES_HPP
# define CLASSES_HPP

#include <iostream>

class Base
{
    public:
        virtual ~Base(){};
};

class A: public Base
{
    public:
        A()
        {
            std::cout << "A created" << std::endl;
        };
};

class B: public Base
{
    public:
        B()
        {
            std::cout << "B created" << std::endl;
        };
};

class C: public Base
{
    public:
        C()
        {
            std::cout << "C created" << std::endl;
        };
};

#endif