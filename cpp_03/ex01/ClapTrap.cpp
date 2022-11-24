/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 22:33:09 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/24 23:51:20 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"



ClapTrap::ClapTrap(std::string s):name(s),
								hitPoint(10),
								energyPoint(10),
								attackDamage(0)
{
	std::cout << name << " has been created" << std::endl; 
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	*this = src;
}



ClapTrap::~ClapTrap()
{
	std::cout << name << " died" << std::endl; 
}

std::string	ClapTrap::getName(void) const
{
	return name;
}

unsigned int	ClapTrap::getHitPoint(void) const
{
	return hitPoint;
}

unsigned int	ClapTrap::getEnergyPoint(void) const
{
	return energyPoint;
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return attackDamage;
}

void			ClapTrap::setName(std::string s)
{
	this->name = s;
}

void			ClapTrap::setHitPoint(unsigned int amount)
{
	this->hitPoint = amount;
}

void			ClapTrap::setEnergyPoint(unsigned int amount)
{
	this->energyPoint = amount;
}

void			ClapTrap::setAttackDamage(unsigned int amount)
{
	this->attackDamage = amount;
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
	std::cout << "ClapTrap " << this->name;
	if (this->energyPoint && this->hitPoint)
	{
		this->energyPoint--;
		std::cout << " attacks " << target;
		std::cout << ", causing " << this->attackDamage;
		std::cout << " points of damage!" << std::endl;
		return ;
	}
	if (!this->hitPoint)
		std::cout << "doesn\'t have enough hit point"<< std::endl;
	else if (!this->energyPoint)
		std::cout << "doesn\'t have enough energy point"<< std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	this->hitPoint = (unsigned int)this->hitPoint > amount ? this->hitPoint - amount : 0;
	std::cout << "ClapTrap " << this->name;
	std::cout << " took " << amount;
	std::cout << " points of damage!" << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name;
	if (this->energyPoint && this->hitPoint)
	{
		this->hitPoint += amount;
		this->energyPoint--;
		std::cout << " has been repaired by " << amount << std::endl;
	}
	else if (!this->hitPoint)
		std::cout << " doesn\'t have enough hit point"<< std::endl;
	else if (!this->energyPoint)
		std::cout << " doesn\'t have enough energy point"<< std::endl;
}
