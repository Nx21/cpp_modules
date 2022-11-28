/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:25:07 by nasreddine        #+#    #+#             */
/*   Updated: 2022/11/27 01:48:51 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
Harl::Harl()
{
}

Harl::~Harl()
{
    
}

void   Harl::nothing()
{
    
}

void    Harl::complain(std::string level)
{
    int idx = -1;
    const std::string lvl[4] = {
                            "DEBUG",
                            "INFO",
                            "WARNING",
                            "ERROR"
                            };
    for (size_t i = 0; i < 4;i++)
        idx = level == lvl[i] ? i : idx;
    switch (idx)
    {
        case 0:
            debug();
            break;
        case 1:
            info();
            break;
        case 2:
            warning();
            break;
        case 3:
            error();
            break;
        default:
            std::cout << "[Probably complaining about insignificant problems]" << std::endl;
            break;
    }
}

void    Harl::debug()
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love having extra bacon for ";
    std::cout << "my 7XL-double-cheese-triple-pickle-specialketchup";
    std::cout << " burger. I really do!" << std::endl << std::endl;
    info();
}


void    Harl::info()
{
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs ";
    std::cout << "more money. You didn’t putenough bacon in my burger! If you";
    std::cout << "did, I wouldn’t be asking for more!" << std::endl << std::endl;
    warning();
}

void    Harl::warning()
{
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon ";
    std::cout << "for free. I’ve been coming for years whereas you started ";
    std::cout << "working here since last month." << std::endl << std::endl;
    error();
}

void    Harl::error()
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;        
}