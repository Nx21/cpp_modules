/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 00:21:57 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/26 22:31:53 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &nam)
{
    name = nam;
    weapon = NULL;
}

HumanB::~HumanB()
{
    std::cout << name << " died" << std:: endl;
}

HumanB::HumanB(const HumanB &human)
{
    *this = human;
}

void    HumanB::setWeapon(Weapon &w)
{
    weapon = &w;
}

void    HumanB::setName(const std::string &nam)
{
    name = nam;
}

HumanB  &HumanB::operator=(const HumanB &h)
{
    this->name = h.name;
    this->weapon = h.weapon;
    return (*this);
}

void    HumanB::attack()
{
    if (weapon)
    {
        std::cout << name  << " attacks with their ";
        std::cout << weapon->getType() << std::endl;
        return ;
    }
    std::cout << name  << " has no weapon"<< std::endl; 
}
