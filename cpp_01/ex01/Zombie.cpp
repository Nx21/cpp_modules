/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 23:33:32 by nhanafi           #+#    #+#             */
/*   Updated: 2022/10/22 16:16:15 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string s)
{
    name = s;
}

// Zombie::Zombie()
// {

// }

Zombie::Zombie(const Zombie& zombie)
{
    *this = zombie;
}

Zombie::~Zombie()
{
    std::cout << name << ": dead" << std::endl; 
}

void Zombie::setname(std::string &s)
{
    name = s;
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie &Zombie::operator=(const Zombie& zombie)
{
    this->name = zombie.name;
    return (*this);
}