/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:10:23 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/26 22:34:07 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &nam, Weapon &w):name(nam),weapon(w)
{
    
}

HumanA::~HumanA()
{
    std::cout << name << " died" << std:: endl;
}

HumanA::HumanA(const HumanA &human):name(human.name),weapon(human.weapon)
{
    
}

void    HumanA::setWeapon( Weapon &w)
{
    weapon = w;
}

void    HumanA::setName(const std::string nam)
{
    name = nam;
}

HumanA  &HumanA::operator=(const HumanA &h)
{
    this->name = h.name;
    this->weapon = h.weapon;
    return (*this);
}

void    HumanA::attack()
{
    std::cout <<  name  << " attacks with their ";
    std::cout << weapon.getType() << std::endl;
}
