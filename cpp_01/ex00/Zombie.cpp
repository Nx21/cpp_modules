/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:12:42 by nhanafi           #+#    #+#             */
/*   Updated: 2022/10/21 22:50:32 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string s)
{
    name = s;
}

Zombie::~Zombie()
{
    std::cout << name << ": dead" << std::endl; 
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