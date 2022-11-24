/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 22:33:09 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/24 01:44:36 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"



ClapTrap::ClapTrap(std::string s):name(s),
								energyPoint(10),
								hitPoint(10),
								attackDamage(0)
{
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	*this = src;
}



ClapTrap::~ClapTrap()
{
}

std::string	ClapTrap::getName(void) const
{
	return name;
}

int			ClapTrap::getHitPoint(void) const
{
	return hitPoint;
}

int			ClapTrap::getEnergyPoint(void) const
{
	return energyPoint;
}

int			ClapTrap::getAttackDamage(void) const
{
	return attackDamage;
}

ClapTrap 	&ClapTrap::operator=(ClapTrap const & rhs)
{
	if ( this != &rhs )
	{
		this->hitPoint = rhs.getHitPoint();
		this->name = rhs.getName();
		this->attackDamage = rhs.getAttackDamage();
		this->energyPoint = rhs.getEnergyPoint();
	}
	return *this;
}

void		ClapTrap::attack(const std::string &target)
{
	if (this->energyPoint && this->hitPoint)
	{
		this->energyPoint--;
		std::cout << "ClapTrap <name> attacks <target>, causing <damage> points of damage!" << std::endl;
	}
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (this->energyPoint && this->hitPoint)
	{
		this->hitPoint -= ;
		std::cout << "took <damage> points of damage!" << std::endl;
	}
}
