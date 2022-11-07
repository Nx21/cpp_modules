/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasreddine <nasreddine@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:25:07 by nasreddine        #+#    #+#             */
/*   Updated: 2022/11/07 17:43:52 by nasreddine       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
Harl::Harl(/* args */)
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
    const method_function func[4] = {
                            &Harl::debug,
                            &Harl::info,
                            &Harl::warning,
                            &Harl::error
                            };
    const std::string lvl[4] = {
                            "DEBUG",
                            "INFO",
                            "WARNING",
                            "ERROR"
                            };
    for (size_t i = 0; i < 4;i++)
        level == lvl[i] ? ((this->*func[i])()) : (void)NULL;
}

void    Harl::debug()
{
    std::cout << "I love having extra bacon for ";
    std::cout << "my 7XL-double-cheese-triple-pickle-specialketchup";
    std::cout << " burger. I really do!" << std::endl;
}

void    Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs \
    more money. You didn’t putenough bacon in my burger! If you\
    did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon \
    for free. I’ve been coming for years whereas you started \
    working here since last month."<< std::endl;
}

void    Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;        
}