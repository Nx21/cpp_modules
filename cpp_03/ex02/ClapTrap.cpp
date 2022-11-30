/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 22:33:09 by nhanafi           #+#    #+#             */
/*   Updated: 2022/11/29 03:03:00 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void):name("Unkown"),
						hitPoint(10),
						energyPoint(10),
						attackDamage(0)
{
	std::cout << name << " has been created" << std::endl; 
}

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

ClapTrap 	&ClapTrap::operator=(ClapTrap const & rhs)
{
	if ( this != &rhs )
	{
		this->name = rhs.name;
		this->hitPoint = rhs.hitPoint;
		this->attackDamage = rhs.attackDamage;
		this->energyPoint = rhs.energyPoint;
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
		std::cout << " doesn\'t have enough hit point" << std::endl;
	else if (!this->energyPoint)
		std::cout << " doesn\'t have enough energy point" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	int tmp = (unsigned int)this->hitPoint > amount ? this->hitPoint - amount : 0;
	std::cout << "ClapTrap " << this->name;
	std::cout << " took " << (tmp == 0 ? this->hitPoint : amount);
	std::cout << " points of damage!" << std::endl;
	this->hitPoint = tmp;
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
		std::cout << " doesn\'t have enough hit point" << std::endl;
	else if (!this->energyPoint)
		std::cout << " doesn\'t have enough energy point" << std::endl;
}

void		ClapTrap::info()
{
	std::cout << "INFO :" << std::endl;
	std::cout << "\tname :" << name << std::endl;
	std::cout << "\tattackDamage :" << attackDamage << std::endl;
	std::cout << "\tenergyPoint :" << energyPoint << std::endl;
	std::cout << "\thitPoint :" << hitPoint << std::endl;
}
